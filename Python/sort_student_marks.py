#Write a program to accept marks of 6 students and display them in a sorted manner

marks = []

for _ in range(6):
    m = int(input(f"Marks of student {_+1}: "))
    marks.append(m)

marks.sort()
print(marks)