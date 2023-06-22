import numpy as np
import matplotlib.pyplot as plt

x = np.array([2,5,2,5,3,4,4,1,5,6,5,2,5,3,4,2]);
y = np.array([5,2,3,5,2,5,3,4,5,5,2,5,3,4,1,5]);

plt.scatter(x,y, marker="^", edgecolors="yellow", s=250);
plt.show();