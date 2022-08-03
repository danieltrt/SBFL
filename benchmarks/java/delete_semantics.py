import os
import subprocess
from os import listdir
import time
from tqdm import tqdm
cmd = './cmake-build-debug/src/Gen -f {} -g {}'

benchmarks = ['/Users/drramos/Documents/Dev.nosync/Java2CPP/benchmarks/java/' +
              f for f in listdir('/Users/drramos/Documents/Dev.nosync/Java2CPP/benchmarks/java/')]
cpps = list(filter(lambda x: x.endswith('.cpp'), benchmarks))


i = 0
for cpp in cpps:
    print(cpp)
    out = cpp[:-4] + ".out"
    txt = cpp[:-4] + ".txt"

    if txt not in benchmarks:
        os.remove(cpp)

# Calculate the sho