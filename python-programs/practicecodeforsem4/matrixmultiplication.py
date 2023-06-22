import numpy as np;


a = [[1, 2, 3], [4, 2, 5], [6, 3, 1]]
b = [[1, 2, 3], [4, 2, 5], [6, 3, 1]]

print(f"\nMultiplication:\n {np.dot(a, b)}");
print(f"\nTranspose:\n {np.transpose(a)}");
print(f"\nDeterminant: {np.linalg.det(a)}");