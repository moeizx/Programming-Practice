# Create a Student class that takes name & marks of three subjects as arguments in constructor. Then create a method to print the average

class Student:
    def __init__(self, name, marks):
        self.name = name
        self.marks = marks

    def get_avg(self):
        sum = 0
        for i in self.marks:
            sum += i
        return sum/3
    
obj1 = Student("David", [98,56,75])
print(f"Student name: {obj1.name}\nAverage Marks: {obj1.get_avg()}")
