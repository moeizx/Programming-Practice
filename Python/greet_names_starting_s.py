# Write a program to greet all the person names stored in a list ‘l’ and which starts with S

l = []
list_size = int(input("Number of names in the list: "))

for _ in range(list_size):
    name = input("Enter name: ")
    l.append(name)

for i in l:
    if i.startswith("S"):
        print(f"Hello, {i}")
