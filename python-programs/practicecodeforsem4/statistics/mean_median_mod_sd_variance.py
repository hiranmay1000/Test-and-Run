import sys
sys.path.append(r"C:\Users\Hiranmay-Strix\Documents\computer_world\programs-in-all-languages\python-programs\practicecodeforsem4")
from arrayinput import arr

import numpy as np
import statistics as sts

mean = np.mean(arr)
median = np.median(arr)
mode = sts.mode(arr)
sd = sts.stdev(arr)
var = sts.variance(arr)

print("\nMean: ", mean);
print("Median: ", median);
print("Mode", mode);
print("Std deviation: ", sd);
print("Variance: ", var);
