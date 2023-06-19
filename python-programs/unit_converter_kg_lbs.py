kg = 0
lbs = 0
output = 0

user = int(input("Press 1 to covert kg to lbs\nPress 2 to convert lbs to kg: "))

if user == 1:
    kg = float(input("Enter weight in Kg: "))
    output = kg * 2.2
elif user == 2:
    lbs = float(input("Enter weight in lbs: "))
    output = lbs / 2.2

print("Output: " + str(output))

