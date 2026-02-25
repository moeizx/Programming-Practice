#Write a program which finds out whether a given name is present in a list or not.

names_list = []
list_size = int(input("How many names do you want to enter?" ))

for _ in range(list_size):
    name = input("Name: ")
    names_list.append(name.lower())

x = input("Enter name you want to find: ")

if x.lower() in names_list: 
    print(f"{x} is in the list")
else:
    print(f"{x} is not in the list")