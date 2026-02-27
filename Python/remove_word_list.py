#Write a python function to remove a given word from a list

def func(l,  word):
    if word in l:
        l.remove(word)
        return True
    else:
         return False

names = ["David", "Bob", "Charlie", "Alex"]

name_to_remove = input("Enter the name you want to remove: ")

x = func(names, name_to_remove)

if x is True:
    print(f"{name_to_remove} has been removed")
    print(f"Updated list: {names}")
else:
    print(f"{name_to_remove} not found")
     



