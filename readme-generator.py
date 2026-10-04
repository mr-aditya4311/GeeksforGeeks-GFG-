import os

topics = [d for d in os.listdir('.') if os.path.isdir(d) and not d.startswith('.')]
with open("README.md", "w") as f:
    f.write("# GeeksforGeeks Problems\n\n")
    for topic in topics:
        f.write(f"## {topic}\n")
        for problem in os.listdir(topic):
            f.write(f"- {problem}\n")
        f.write("\n")
