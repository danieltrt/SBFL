from os import listdir
import re

ground = "/Users/drramos/PycharmProjects/SBFL_CPP/ground_truths/geeks_for_geeks_successful_test_scripts/cpp/"
f_filled = "/Users/drramos/PycharmProjects/SBFL_CPP/results/java_codex/"
files = filter(lambda x: x.endswith(".cpp") != -1, listdir(ground))
for file in files:
    with open(ground + file, "r") as f1:
        java_file = file[:-3] + "java"
        with open(f_filled + java_file, "r") as f2:
            truth = f1.read()
            candidate = f2.read()
            print(candidate)

            with open("./java_codex/" + file, "w+") as f3:
                match = re.match(r"[\w ]+ (\w+) ?\(", candidate)
                name = match.group(1)
                candidate = candidate.replace(name, "f_filled")
                res = truth.replace("//TOFILL", candidate)
                f3.write(res)
