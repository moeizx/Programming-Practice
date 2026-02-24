# Write a program to sum a list with 4 numbers. 

l = []

#get list elements from the user
for _ in range(4):
    number = int(input("Number: "))
    l.append(number)


sum = 0
#find sum
for _ in l:
    sum += _

#print sum
print(f"Sum = {sum}")