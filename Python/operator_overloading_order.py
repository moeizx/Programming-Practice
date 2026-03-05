# Create a class Order with attributes item and price. Overload the greater-than (>) operator so that two Order objects can be compared based on their price. Create two objects and demonstrate the comparison

class Order:
    def __init__(self, item, price):
        self.item = item
        self.price = price

    def __gt__(self, obj2):
        return self.price > obj2.price

obj1 = Order("Chicken", 500)
obj2 = Order("Cold Drink", 200)

print(obj1 > obj2)