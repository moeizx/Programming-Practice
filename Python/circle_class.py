# Create a Python class Circle with an attribute radius. Add methods to calculate the area and perimeter of the circle. Create an object of the class and display the radius, area, and perimeter (formatted to two decimal places)

class Circle:
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return 3.14*(self.radius*self.radius)
    
    def perimeter(self):
        return 2*3.14*self.radius
    
obj = Circle(10)
print(f"Radius: {obj.radius}")
print(f"Area: {obj.area():.2f}")
print(f"Perimeter: {obj.perimeter():.2f}")