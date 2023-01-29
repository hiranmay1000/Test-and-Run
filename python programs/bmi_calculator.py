user = int(input("Unit Scale:\n\nPress 1 for kilogram\nPress 2 for lbs: "))

output = 0
kg = 0

if user == 1:
    kg = float(input("Enter weight in kilogram: "))
    unit = int(input("For height select unit:\nPress 1 Centimeter\nPress 2 Feet: "))
    if unit == 1:
        cm = int(input("Enter height in centimeter: "))
        meter = cm * (1/100) 
    elif unit == 2:
        print("Enter height in feet'inces'': ")
        feet = int(input("Enter feet: "))
        inch = int(input("Enter inches: "))
        meter = (((feet * 12) + inch) * 2.54) / 100         # convert feet and inches to meter

elif user == 2:
    lbs = int(input("Enter weight in lbs: "))
    unit = int(input("For height select unit:\nPress 1 Centimeter\nPress 2 Feet: "))
    kg = lbs/2.2                                            # convert lbs to kg
    if unit == 1:
        cm = int(input("Enter height in centimeter: "))
        meter = cm * (1/100) 
    elif unit == 2:
        print("Enter height in feet'inces'': ")
        feet = int(input("Enter feet: "))
        inch = int(input("Enter inches: "))
        meter = (((feet * 12) + inch) * 2.54) / 100         # convert feet and inches to meter


else:
    print("Invalid option chosen try again!!")


output = kg / (meter * meter)
print("\nYour BMI is: " + str(output))

if output >= 18.5 and output <= 25:
    print("Normal")
elif output < 18.5:
    print("Underweight")
else:
    print("Overweight")
