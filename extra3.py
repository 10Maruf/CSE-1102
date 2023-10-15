import numpy as np
import matplotlib.pyplot as plt

def f(x):
    return np.sin(x)

x = np.linspace(2*np.pi, 4*np.pi, 400)
y = f(x)

def derivative(x):
    return np.cos(x)

critical_points = []
for i in range(2, 8):
    result = np.pi * i
    if result >= 2*np.pi and result <= 4*np.pi:
        critical_points.append(result)
critical_values = [(point, f(point)) for point in critical_points]
minima = min(critical_values, key=lambda x: x[1])
maxima = max(critical_values, key=lambda x: x[1])
print("Minimum:", minima)
print("Maximum:", maxima)
plt.plot(x, y, label='y = sin(x)')
plt.scatter(minima[0], minima[1], color='red', marker='*', label='Minima')
plt.scatter(maxima[0], maxima[1], color='red', marker='*', label='Maxima')
plt.xlabel('x')
plt.ylabel('y')
plt.title('Plot of the Function with Maxima and Minima')
plt.grid()
plt.legend()
plt.show()
