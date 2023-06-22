import BubbleSort as sort
import statistics as st

n = int(input("Enter size: "))
arr = []
for i in range(0, n):
    val = int(input(f"Val [{i}]: "))
    arr.append(val)

sort.bubbleSort(arr)

mean = 0
median = 0
mode = st.mode(arr)
stdDev = st.stdev(arr)
variance = st.variance(arr)
sum = 0

for val in arr:
    sum += val

print(f"Mean: {sum / len(arr)}")
if (len(arr) % 2 != 0):  # ODD
    idx = len(arr)/2
    print(f"Median (odd): {arr[int(idx)]}")
else:                    # EVEN
    idx = len(arr)//2
    print(idx)
    print(f"Midean (even): {(arr[int(idx - 1)] + arr[int(idx)]) / 2}")

print(f"Mode: {mode}")
print(f"Standard deviation: {stdDev}")
print(f"Variance: {variance}")
