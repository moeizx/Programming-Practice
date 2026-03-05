# Create a class TwoDVector with components i and j and a method to display the 2-D vector. Then create a class ThreeDVector that inherits from TwoDVector, adds a third component k, and includes a method to display the 3-D vector. Create an object of ThreeDVector and demonstrate both methods.

class TwoDVector:
    def __init__(self, i, j):
        self.i = i
        self.j = j

    def show2d(self):
        print(f"{self.i}i + {self.j}j")

class ThreeDVector(TwoDVector):
    def __init__(self, i, j, k):
        self.k = k
        super().__init__(i,j)

    def show3d(self):
        print(f"{self.i}i + {self.j}j + {self.k}k")

obj1 = ThreeDVector(1,2,3)
obj1.show2d()
obj1.show3d()