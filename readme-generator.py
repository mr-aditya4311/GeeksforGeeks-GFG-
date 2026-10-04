import os

START = "<!---GFG Topics Start-->"
END = "<!---GFG Topics End-->"

def generate_content():
    content = START + "\n# GFG Topics\n\n"
    topics = [d for d in os.listdir('.') if os.path.isdir(d) and not d.startswith('.')]
    for topic in topics:
        content += f"## {topic}\n|  |\n| ------- |\n"
        for problem in os.listdir(topic):
            content += f"| [{problem}](./{topic}/{problem}) |\n"
        content += "\n"
    content += END
    return content

def update_readme():
    with open("README.md", "r+") as f:
        data = f.read()
        if START in data and END in data:
            new_data = data.split(START)[0] + generate_content() + data.split(END)[1]
        else:
            new_data = data + "\n" + generate_content()
        f.seek(0)
        f.write(new_data)
        f.truncate()

if __name__ == "__main__":
    update_readme()
