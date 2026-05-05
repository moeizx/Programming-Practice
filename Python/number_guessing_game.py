from random import randint

num = randint(1,100)
steps = 0
max_attempts = 7
user_choice = None

print("Guess the number between 1 to 100\n You have 7 attempts to guess")

while steps<max_attempts:
    try:
        user_choice = int(input("Enter number: "))
        steps += 1
    except ValueError:
        print("Please enter a valid number")
        continue

    if user_choice < num:
        if abs(num - user_choice) <= 5:
            print("Very Close - Too Low")
        else:
            print("Too Low")
    
    elif user_choice > num:
        if abs(num - user_choice) <= 5:
            print("Very Close - Too High")
        else:
            print("Too High")

    else:
        break

if user_choice == num:
    print(f"Correct!\nNumber of steps: {steps}")

else:
    print(f"Out of attempts! The number was {num}")