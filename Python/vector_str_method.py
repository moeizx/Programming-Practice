# Create a class Vector representing a 3-dimensional vector with components i, j, and k. Write the __str__() method so that printing the object displays the vector in the format 7i + 8j + 10k. Create an object and print it

class Vector:
    def __init__(self, i, j, k):
        self.i = i
        self.j = j
        self.k = k

    def __str__(self):
        return f"{self.i}i + {self.j}j + {self.k}k"
    
obj = Vector(1,2,3)
print(obj)