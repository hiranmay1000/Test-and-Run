class CalcBMI:
    def get_BMI(kilo, meter):
        return kilo / (meter * meter)

class HeightInCenti(CalcBMI):
    def getMeterFromCenti():
        height = int(input("Enter in centimeter: \n>"))
        meter = height / 100
        return meter

class HeightInFeet(CalcBMI):
    def getMeterFromFeetInches():
        feet = float(input("Enter feet:"))
        inch = float(input("Enter inches:"))
        inches = (feet * 12) + inch
        meter = inches * 0.0254
        return meter


def selectUnitSystem():
    user = int(input("\nSelect height unit\nEnter 1 for centimeter:\nEnter 2 for Feet, Inches:\n>"))
    if user == 1:
        return my_height_in_centi.getMeterFromCenti()
    elif user == 2:
        return my_height_in_feet.getMeterFromFeetInches()


my_BMI = CalcBMI
my_height_in_centi = HeightInCenti
my_height_in_feet = HeightInFeet

val = 0
def runBMI():
    while True:
        user = input("Press 1 for Kilo:\nPress 2 for lbs:\nPress Q to quit \n>")
        if user == "1":
            kilo = float(input("Enter weight in Kilo: "))
            height = selectUnitSystem()
            print(my_height_in_centi.get_BMI(kilo, height))
            # print(f'{value: . 2f}')

        elif user == "2":
            lbs = int(input("Enter weight in lbs: "))
            kilo = lbs / 2.20462262
            height = selectUnitSystem()
            print(my_height_in_feet.get_BMI(kilo, height))

        elif user == "Q" or 'q':
            break

        else:
            print("Plese select right option")


# run program -> (ctrl + ')
runBMI()