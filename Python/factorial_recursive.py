# Write a recursive function to find the factorial of the given number.

def recursion(number):
    #base case
    if number == 1 or number == 0:
        return 1
    #recursive case
    else:
        return number*recursion(number-1)
    
number = int(input("Number: "))

if number < 0:
    print("Factorial is not defined for negative numbers")
else:
    print(f"Factorial of {number} = {recursion(number)}")
