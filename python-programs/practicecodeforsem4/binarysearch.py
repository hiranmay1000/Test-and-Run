from arrayinput import *


val = int(input("Enter any positive value to be searched: "))

start = 0
end = len(arr) - 1
f = 0

while (start <= end):
    mid = start + (end - start) // 2
    if (arr[mid] == val):
        print(f"{val} is present at index [{mid}]")
        f = 1
        break

    if (arr[mid] < val):
        start = mid + 1
    else:
        end = mid - 1

if (f == 0):
    print("No element found!")
