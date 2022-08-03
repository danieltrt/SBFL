import os
import json

path = "/Users/drramos/PycharmProjects/SBFL_CPP/ground_truths/geeks_for_geeks_successful_test_scripts/"

cpp_files = set(map(lambda x: x[:-4], [path + file for file in os.listdir(path + "cpp/")]))
java_files = set(map(lambda x: x[:-5], [path + file for file in os.listdir(path + "java/")]))
python_files = set(map(lambda x: x[:-3], [path + file for file in os.listdir(path + "python/")]))


java_benchmarks = list(cpp_files.intersection(java_files))
python_benchmarks = list(cpp_files.intersection(python_files))


print(len(java_benchmarks), len(python_benchmarks))


with open("/Users/drramos/PycharmProjects/SBFL_CPP/benchmarks 2/python.0.json", encoding='utf-8') as f:
    for line in f:
        model = json.loads(line)
        print(model['path'])
