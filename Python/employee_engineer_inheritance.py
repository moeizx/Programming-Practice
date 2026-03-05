# Create a class Employee with attributes role, department, and salary, and a method to display these details. Then create a subclass Engineer that inherits from Employee, adds attributes name and age, and overrides the display method to show all the information

class Employee:
    def __init__(self, role, department, salary):
        self.role = role
        self.department = department
        self.salary = salary

    def show(self):
        print(f"Role: {self.role}")
        print(f"Department: {self.department}")
        print(f"Salary: {self.salary}")

class Engineer(Employee):
    def __init__(self,name,age):
        self.name = name
        self.age = age
        super().__init__("Engineer","Software","10,000")

    def show(self):
        super().show()
        print(f"Name: {self.name}")
        print(f"Age: {self.age}")

obj = Engineer("David","25")
obj.show()