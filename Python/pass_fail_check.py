'''Write a program to find out whether a student has passed or failed if it requires a 
total of 40% and at least 33% in each subject to pass. Assume 3 subjects and 
take marks as an input from the user. '''

d = {}

marks1 = int(input("Subject 1 marks: "))
d.update({"Subject1": marks1})

marks2 = int(input("Subject 2 marks: "))
d.update({"Subject2": marks2})

marks3 = int(input("Subject 3 marks: "))
d.update({"Subject3": marks3})


percentage = (sum(d.values()) / 300) * 100

if percentage < 40 or marks1 < 33 or marks2 < 33 or marks3 < 33:
    print("Fail")
else:
    print("Pass")