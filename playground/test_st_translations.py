from os import listdir

ground = "/Users/drramos/PycharmProjects/SBFL_CPP/ground_truths/geeks_for_geeks_successful_test_scripts/cpp/"
f_filled = "/Users/drramos/PycharmProjects/SBFL_CPP/results/py/"
files = filter(lambda x: x.endswith(".cpp") != -1, listdir(ground))
for file in files:
    with open(ground + file, "r") as f1:
        with open(f_filled + file, "r") as f2:
            truth = f1.read()
            candidate = f2.read()
            res = truth.replace("//TOFILL", candidate)
            with open("./py/" + file, "w+") as f3:
                f3.write(res)