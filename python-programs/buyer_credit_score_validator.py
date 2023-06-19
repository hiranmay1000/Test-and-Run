isGood = True
housePrice = 1000000

if isGood:
    downPayment = (housePrice / 100 ) * 10
else: 
    downPayment = (housePrice / 100 ) * 20

print(f"Down payment:  ${downPayment}") # formatted string