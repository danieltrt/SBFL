import os
import openai
import os
openai.organization = "org-NGeM7xd8YkcTE8569zCd785t"
openai.api_key = "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"


def translate(code, path):
    prompt = f"""##### Translate this function from Java into C++
    ### Java

    {code}

    ### C++"""


    response = openai.Completion.create(
      model="code-davinci-002",
      prompt=prompt,
      temperature=0,
      max_tokens=200,
      top_p=1.0,
      frequency_penalty=0.0,
      presence_penalty=0.0,
      stop=["###"]
    )

    with open(path, "a+") as f2:
        for res in response["choices"]:
            print(path, res["text"])
            f.write(res["text"])

    input("next?")


dest = "/Users/drramos/PycharmProjects/SBFL_CPP/playground/java_codex"
files = os.listdir("./")
for file in files:
    src = os.path.join(os.getcwd(), file)
    with open(src, "r+") as f:
        code = f.read()
        translate(code, os.path.join(dest, file))