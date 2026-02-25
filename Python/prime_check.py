#  Write a program to find whether a given number is prime or not. 

import math

number = int(input("Number: "))

if number < 2:
    print(f"{number} is not a prime number")

else:
    prime = True

    for i in range(2, int(math.sqrt(number) + 1)):
        if number % i == 0:
            prime = False

    if prime == True:
        print(f"{number} is a prime number")
    else:
        print(f"{number} is not a prime number")