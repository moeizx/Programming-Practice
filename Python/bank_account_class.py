# Create class "Account" with 2 attributes - balance & acc no. Create methods for debit, credit, and printing the balance

class Account:
    def __init__(self, bal, acc):
        self.bal = bal
        self.acc = acc

    def balance(self):
        print(f"Balance: ${self.bal}")

    def debit(self, amount):
        self.bal -= amount
        print(f"${amount} were debited from your account")

    def credit(self, amount):
        self.bal += amount
        print(f"${amount} were credited to your account")

obj = Account(10000, 12345)
obj.balance()
obj.debit(2000)
obj.balance()
obj.credit(3000)
obj.balance()