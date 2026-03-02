# Create a class “Programmer” for storing information of few programmers working at Microsoft.

class Programmer:
    company = "Microsoft"
    def __init__(self, name, salary):
        self.name = name
        self.salary =  salary

p = Programmer("David", 10000)
print(p.name, p.company, p.salary)