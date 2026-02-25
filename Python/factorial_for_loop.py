# Write a program to calculate the factorial of a given number using for loop. 

number = int(input("Number: "))

factorial = 1
for i in range(1,number+1):
    factorial *= i

print(f"Factorial of {number} = {factorial}")
