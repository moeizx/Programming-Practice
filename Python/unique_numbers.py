# Write a program to input eight numbers from the user and display all the unique numbers (once). 

s = set()

for _ in range(8):
    number = int(input("Number: "))
    s.add(number)

print(s)