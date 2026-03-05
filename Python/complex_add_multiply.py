# Create a class Complex to represent complex numbers. Overload the + and * operators to add and multiply two complex numbers. Create objects of the class and display the results of addition and multiplication. 

class Complex:
    def __init__(self, real, img):
        self.real = real
        self.img = img

    def __add__(self, obj2):
        return f"{self.real + obj2.real}i + {self.img + obj2.img}j"
    
    def __mul__(self, obj2):
        real = self.real * obj2.real - self.img * obj2.img
        img = self.real * obj2.img + self.img * obj2.real
        return f"{real} + {img}i"
    
obj1 = Complex(3,4)
obj2 = Complex(1,3)

print(obj1 + obj2)
print(obj1 * obj2)
