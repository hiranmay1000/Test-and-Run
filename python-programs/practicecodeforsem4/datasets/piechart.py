import numpy as np
import matplotlib.pyplot as plt

brands = ["BMW", "Mercedes", "KIA", "Hyundai", "Toyota", "Mahindra", "TATA", "Maruti Suzuki"];
data = [75, 56, 65, 45, 55, 42, 35, 25] # data based on my interest on car brands

plt.pie(data, labels=brands)
plt.xlabel("Car brands")
plt.show();

