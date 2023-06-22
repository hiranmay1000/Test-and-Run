
# A simple recursive CPP program to print
# first n Tribonacci numbers.
 
def getTribonacci(n) :
    if (n == 0 or n == 1 or n == 2) :
        return 0
    elif (n == 3) :
        return 1
    else :
        return (getTribonacci(n - 1) +
                getTribonacci(n - 2) +
                getTribonacci(n - 3))
         
 
def printTrib(n) :
    sums = 0
    for i in range(1, n) :
        sums += getTribonacci(i)
        print( getTribonacci(i) , " ", end = "")
         
    return sums
 
# Driver code
# 
# go to (print_trip.py) 
 
# This code is contributed by Nikita Tiwari.