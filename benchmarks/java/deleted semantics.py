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
    out = cpp[:-4] + ".out"
    if out in benchmarks:
        os.remove(out)
        os.remove(cpp)

# Calculate the sho