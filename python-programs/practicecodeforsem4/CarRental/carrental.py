# Car Rental System: Create classes for a car rental system, such as Car, Customer, and RentalAgency. Implement methods for renting a car, returning a car, calculating rental charges, and managing customer information.


class Car:

    def __init__(self) -> None:
        self.carWeightage = {
            "Thar": 3500,
            "Venue": 2100,
            "Scorpio": 3200,
            "Innova": 1800,
            "BMW X5": 4200,
            "XUV 500": 3700
        }

    def availableCars(self):
        for car in self.carWeightage:
            print(car)


class Customer:
    def __init__(self):
        self.name = ""
        self.age = 0
        self.city = ""

    def setCustomerInfo(self, name, age, city):
        self.name = name
        self.age = age
        self.city = city

    def getCustomerInfo(self):
        print("_______Customer-Info_______")
        print("Name: ", self.name)
        print("Age: ", self.age)
        print("City: ", self.city)


class RentalAgency(Car, Customer):
    def __init__(self) -> None:
        self.car = Car()
        self.customer = Customer()
        self.securityMoney = 4000
        self.borrowingHours = 0
        self.selectedCar = ""
        self.rentPrice = 0

    def calculatePrice(self, totalDays, car):
        self.rentPrice = totalDays * self.car.carWeightage[car]
        self.selectedCar = car
        self.borrowingHours = totalDays * 24

    def showPrice(self):
        print("Car selected: ", self.selectedCar)
        print("Borrowing hours: ", self.borrowingHours)
        print("Rental: ", self.rentPrice)
        print("Security money: ", self.securityMoney)
        print("Total: ", self.rentPrice + self.securityMoney)

    def finalize(self):
        self.customer.getCustomerInfo()
        print("Car selected: ", self.selectedCar)
        print("Borrowing hours: ", self.borrowingHours)
        print("Rental: ", self.rentPrice)
        print("Security money: ", self.securityMoney)
        print("Total: ", self.rentPrice + self.securityMoney)


r = RentalAgency()
c = Car()


select_car = ""
totalDays = 0


def agency():
    c.availableCars()
    select_car = input("Choose your car: ")
    totalDays = int(input("Enter total days requirement: "))
    print("Please wait while we calculating best deal for you")
    r.calculatePrice(totalDays, select_car)
    print("_______Preview_______")
    r.showPrice()
    print("\n")
    final = input("Do you want to change car? : ")
    return final


final = agency()

while (final == "Yes" or final == "Y" or final == "y" or final == "yes" or final == "ye"):
    agency()


print("Finalizing...")
name = input("Enter name: ")
age = int(input("Enter age: "))
city = input("Enter your ciy name or address: ")
Customer.setCustomerInfo(name, age, city)
r.finalize()
print("Thank you for choosing HM Car Rentals\nHave a safe and great trip")

