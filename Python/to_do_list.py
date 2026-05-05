tasks = []

while True:
    print("\n1. Add Task")
    print("2. View Tasks")
    print("3. Remove Task")
    print("4. Exit")

    try:
        choice = int(input("\nEnter choice: "))
    except ValueError:
        print("\nInvalid input")
        continue

    if choice == 1:
        task = input("\nEnter task: ")
        tasks.append(task)
        print("\nTask added")

    elif choice == 2:
        if not tasks:
            print("\nNo tasks to show")

        else:
            for i in range(len(tasks)):
                print(f"{i+1}. {tasks[i]}")

    elif choice == 3:
        if not tasks:
            print("\nNo tasks to remove")
            continue

        print("\nWhich task do you want to remove?")

        for i in range(len(tasks)):
            print(f"{i+1}. {tasks[i]}")

        try:
            while True:
                remove_choice = int(input("\nEnter the task number you want to remove: "))
                if 1<=remove_choice<=len(tasks):
                    tasks.pop(remove_choice-1)
                    print("\nTask Removed!")
                    break

                else:
                    print("\nInvalid number")

        except ValueError:
            print("\nInvalid value")
            continue

        
    elif choice == 4:
        break

    else: 
        print("\nInvalid choice")