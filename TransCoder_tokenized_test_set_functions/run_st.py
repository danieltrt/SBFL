
%%capture


import os
from collections import defaultdict

languages = ["java", "python"]
for language in languages:
    files = os.listdir(os.path.join(os.path.curdir, language))
    for f_name in files:
        merged = os.path.join(os.path.curdir, language) + f"/{f_name}"
        cmd = f"""python /content/CodeGen/codegen_sources/model/translate.py --model_path '/content/Online_ST_Java_CPP.pth' --src_lang "java" --tgt_lang "cpp" --beam_size 1 --input {merged}--BPE_path "/content/CodeGen/data/bpe/cpp-java-python/codes > /content/results/{f_name}.cpp"""""
