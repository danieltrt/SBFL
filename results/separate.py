import os

from os import listdir
from collections import defaultdict
import re

res = listdir(".")
path = "/Users/drramos/PycharmProjects/SBFL_CPP/ground_truths/geeks_for_geeks_successful_test_scripts/cpp"
available = listdir(path)

language = "py"
exists = defaultdict(bool)
count = 0
print(len(available))
for file in res:
    if "py" in file:
        name = file[:file.find(".py")]
        if name + ".cpp" in available:
            count += 1
            exists[name + ".cpp"] = True
            with open(f"./{name}.py.cpp", "r") as f1:
                with open(f"./py/{name}.cpp", "w+") as f2:
                    content = f1.read()
                    match = re.match(r"[\w ]+ (\w+) \(", content)
                    name = match.group(1)
                    content = content.replace(name, "f_filled")
                    f2.write(content)
