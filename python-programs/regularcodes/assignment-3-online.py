def bubbleSort(arr, n):
    for i in range(0, n):
        for j in range(i, n):
            if (arr[i] > arr[j]):
                arr[j], arr[i] = arr[i], arr[j]


n = int(input("Enter size of array: "))
arr = []

for i in range(0, n):
    val = (input(f"Val [{i}]"))
    arr.append(val)

print("Array before sorting: ")
for i in range(0, n):
    print(arr[i])

bubbleSort(arr, len(arr))
print("Array after sorting: ")
for i in range(0, n):
    print(arr[i])
