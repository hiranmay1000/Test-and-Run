import numpy as np

row = int(input("Enter row: "))
col = int(input("Enter column: "))

# create an empty 2D array

arr = [[0 for j in range(col)] for i in range(row)]

# prompt user to enter values for each element
for i in range(row):
    for j in range(col):
        arr[i][j] = int(input(f"Val: [{i}][{j}] "))


arr2 = np.array(arr)
print("My array: ")
print(arr2)

#transpose of array
trans = np.transpose(arr)
det = np.linalg.det(arr)

print("Transpose: ")
print(trans)
print("Determinant: ")
print(det)



