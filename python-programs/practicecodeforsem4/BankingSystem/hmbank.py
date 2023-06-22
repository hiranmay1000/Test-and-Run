class Bank:
    def __init__(self):
        self.balance = 0

    def account_opening(self, password):
        entered_password = input("Enter password: ")
        if (entered_password == password):
            print("Welcome to HM Bank Pvt.Ltd")
        else:
            print("Invalid user input!")

    def deposit(self, amount):
        if (amount > 0):
            self.balance += amount
            print(f"Amount of {amount} is deposited successfully")
        else:
            print("Invalid amount")

    def withdrawl(self, amount):
        if (self.balance > amount and amount > 0):
            self.balance -= amount
            print(f"Amount of {amount} is withdrawal successfully")
        else:
            print("Insufficient balance!")

    def check_balance(self):
        print(f"Your current balance is Rs.{self.balance}")


password = "123"

entered_password = input("Enter password: ")

if (password == entered_password):
    b = Bank()
    b.account_opening(password)
    b.deposit(3000)
    b.withdrawl(2300)
    b.check_balance()
    b.withdrawl(4000)
else:
    print("Incorrect password!")
