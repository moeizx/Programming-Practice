#Write a program to print multiplication table of a given number using for loop. 

number = int(input("Enter Number:"))

for i in range(1,11):
    print(f"{number}x{i} = {number*i}")
