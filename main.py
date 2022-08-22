import sys
import lldb
import os
from collections import defaultdict
import subprocess
from collections import Counter
import os
import re
import math
from functools import lru_cache

SUCCESS = 1
FAILURE = 0

def compile_cpp(file_name, exec_name):
    command = f"g++ -std=c++14 -g {file_name} -o {exec_name}"
    p1 = subprocess.Popen(command.split(' '), stdout=subprocess.PIPE, stderr=subprocess.PIPE, shell=False)
    output, err = p1.communicate()
    return p1.returncode == 0


def execute_test(file_name, test_number, function_name):
    exec_name = "/tmp/a.out"

    debugger = lldb.SBDebugger(lldb.SBDebugger.Create())
    debugger.SetAsync(False)
    if not compile_cpp(file_name, exec_name):
        return "stop", {}

    target = debugger.CreateTarget(exec_name)
    target.BreakpointCreateByName(function_name, target.GetExecutable().GetFilename())

    process: lldb.SBProcess = target.LaunchSimple([f"{test_number}"], None, os.getcwd())
    # process: lldb.SBProcess = target.LaunchSimple(None, None, os.getcwd())

    thread: lldb.SBThread = process.GetSelectedThread()
    if process.GetState() == lldb.eStateStopped:
        if thread.GetStopReason() == lldb.eStopReasonSignal:
            # assertion error
            return "stop", {}

    frame: lldb.SBFrame = thread.GetSelectedFrame()

    statistics = defaultdict(int)
    it = 0
    while frame.GetFunction().GetDisplayName() != "main" and thread.GetStopReason() != lldb.eStopReasonException and it < 1e3:
        # print(frame.vars)
        it += 1
        statistics[frame.GetLineEntry().GetLine()] += 1
        thread.StepOver()
        frame = thread.GetSelectedFrame()
    process.Continue()
    if process.GetState() == lldb.eStateExited:
        return process.GetExitStatus(), statistics
    if process.GetState() == lldb.eStateStopped: # stopped due to exception
        return -1, statistics

    # assert(0 and "Something went wrong.")

@lru_cache(maxsize=None)
def compute_trace(benchmark, solution):
    f = open(solution, "r")
    sol = f.read()
    f.close()

    faulty_lines = re.compile(r'l(( \d+)* \d+)')
    new_lines = re.compile(r'n(( \d+)* \d+)')

    match1 = faulty_lines.match(sol)
    match2 = new_lines.match(sol)
    sol = match1.group(1) if match1 else ""
    sol += match2.group(1) if match2 else ""
    sol = sol.strip().split()

    merged = defaultdict(Counter)
    failed_passed = defaultdict(int)

    for i in range(10):
        status, statistics = execute_test(benchmark, i, "f_filled")
        failed_passed[status] += 1
        merged[status] = merged[status] + Counter(statistics)
        if status == "stop":
            break
    return merged, failed_passed, sol

def compute_benchmark(benchmark, solution, formula):

    merged, failed_passed, sol = compute_trace(benchmark, solution)

    suspiciousness = {}
    for key in merged[FAILURE] | merged[SUCCESS]:
        suspiciousness[key] = formula(max(merged[FAILURE][key],1), max(merged[SUCCESS][key],1), max(failed_passed[FAILURE],1), max(failed_passed[SUCCESS],1))

    if suspiciousness.keys():
        print("Line", max(suspiciousness, key=suspiciousness.get), benchmark)
        print(suspiciousness)

    if suspiciousness == {}:
        return 0
    return str(max(suspiciousness, key=suspiciousness.get)) in sol


def tarantula(failed, passed, tests_failed, tests_passed):
    if tests_passed == 0:
        return 0
    return (failed / tests_failed) / (failed / tests_failed + passed / tests_passed)

def ochiai(failed, _, tests_failed, tests_passed):
    if math.sqrt(tests_failed * (tests_failed + tests_passed)) == 0:
        return float("inf")
    return failed / math.sqrt(tests_failed * (tests_failed + tests_passed))

def op2(failed, passed, _, tests_passed):
    if (tests_passed + 1) == 0:
        return float("inf")
    return failed - passed / (tests_passed + 1)

def barinel(failed, passed, _, _2):
    if (passed + failed) == 0:
        return float("inf")

    return 1 - passed / (passed + failed)

def d_star(failed, passed, tests_failed, _):
    if (passed + (tests_failed - failed)) == 0:
        return float("inf")
    return failed / (passed + (tests_failed - failed))

if __name__ == "__main__":

    benchmarks_path = "/Users/drramos/PycharmProjects/SBFL_CPP/benchmarks/java/"
    files = [benchmarks_path + file for file in os.listdir(benchmarks_path) if ".cpp" in file]

    for formula in [tarantula, ochiai, op2, barinel, d_star]:
        correct = 0
        print("Testing", formula.__name__)
        for benchmark in files:
            correct += compute_benchmark(benchmark, benchmark.replace("/java/", "/java/java_annotations/"), formula)
        print("Got it right", correct, "times.")


    # get the fault localization using our own approach
