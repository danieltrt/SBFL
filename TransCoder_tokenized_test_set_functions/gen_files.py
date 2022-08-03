import os
from collections import defaultdict

print(os.listdir("."))

languages = ["python"]
files = defaultdict(list)
for language in languages:
    tmp = [name for name in os.listdir(".") if os.path.isfile(name)]
    files[language] = list(filter(lambda x: language in x, tmp))
    path = os.path.join(os.path.curdir, language)
    os.makedirs(path, exist_ok=True)

    for file in files[language]:
        with open(file) as f:
            contents = f.read().split("DEDENT\n")
            for txt in contents:
                sep = txt.find("|")
                file_name = txt[:sep].strip()
                code = txt[sep+1:].strip()
                file_path = os.path.join(path, file_name + f".py")
                indent = 0
                with open(file_path, "w+") as f_file:
                    for line in code.split("\n"):

                        while line.find("INDENT") != -1:
                            sep = line.find("INDENT")
                            if sep != -1:
                                line = line[sep+len("INDENT"):]
                                indent += 4

                        while line.find("DEDENT") != -1:
                            sep = line.find("DEDENT")
                            if sep != -1:
                                line = line[sep+len("DEDENT"):]
                                indent -= 4
                        f_file.write(" " * indent + line.strip() + "\n")
