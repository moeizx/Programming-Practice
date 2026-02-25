# Write a program to find the sum of first n natural numbers using while loop. 

number = int(input("Enter the numbers you want to find sum of: "))
sum = 0

for i in range(number+1):
    sum += i

print(f"Sum: {sum}")