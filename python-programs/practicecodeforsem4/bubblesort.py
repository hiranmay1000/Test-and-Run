from arrayinput import *

print("Unsorted array: ")
print(arr)
def bubblesort(arr):
    for i in range(0, len(arr)):
        for j in range(i, len(arr)):
            if(arr[i] > arr[j]):
                arr[i], arr[j] = arr[j], arr[i];

print("Sorted array: ")
bubblesort(arr)
print(arr)

