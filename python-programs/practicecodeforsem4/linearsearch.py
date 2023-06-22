from arrayinput import *


val = int(input("Enter any positive value to be searched: "))

def search(arr, val):
    for i in range(0, size):
        if (arr[i] == val):
            return i

    return -1


if (search(arr, val) == -1):
    print("Value NOT found!")
else:
    print(f"{val} is found at index [{search(arr, val)}]")
