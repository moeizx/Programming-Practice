# Write a Python program that generates a random number between 1 and 10. The user has to guess the number. After each guess, the program should give hints: 'Lower number please' if the guess is too high, 'Higher number please' if the guess is too low. When the user guesses correctly, display the number of attempts it took.

from random import randint

num = randint(1, 100)
guess = False
steps = 0

while(guess == False):
    x = int(input("Guess: "))
    steps += 1
    if x > num:
        print("Lower Number Please")
        continue
    elif x < num:
        print("Higher number please")
        continue
    else:
        print("Correct guess!")
        print(f"Number of steps: {steps}")
        guess = True