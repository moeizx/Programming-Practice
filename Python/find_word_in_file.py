#Write a program to read the text from a given file ‘poems.txt’ and find out whether it contains the word ‘twinkle’. 

with open("file.txt","r") as f:
    data = f.read()

if "twinkle" in data:
    print("Found")
else:
    print("Not Found")
