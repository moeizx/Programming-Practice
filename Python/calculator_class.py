# Write a class “Calculator” capable of finding square, cube and square root of a number. 

class Calculator:
    def __init__(self, n):
        self.n = n
    
    def square(self):
        print(f"Square of {self.n} = {self.n*self.n}")

    def cube(self):
        print(f"cube of {self.n} = {self.n*self.n*self.n}")

    def squareroot(self):
        print(f"Square root of {self.n} = {self.n**0.5}")


number = Calculator(4)
number.square()
number.cube()
number.squareroot()