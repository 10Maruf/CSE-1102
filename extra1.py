import numpy as np
import matplotlib.pyplot as plt

def f(x):
    return x**4 - 100*x**2 + 10*x - 2
x = np.linspace(-8, 8, 400)
y = f(x)
plt.plot(x, y, label='y = x^4 - 100x^2 + 10x - 2')
plt.xlabel('x')
plt.ylabel('y')
plt.title('Plot of the Function')
plt.grid()
plt.legend()
plt.show()

def derivative(x):
    return 4*x**3 - 200*x + 10
critical_points = np.roots([4, 0, -200, 10])
real_critical_points = [point for point in critical_points.real if -8 <= point <= 8]
def second_derivative(x):
    return 12*x**2 - 200

maxima = 0
minima = 0

for point in real_critical_points:
    if second_derivative(point) > 0:
        minima += 1
    elif second_derivative(point) < 0:
        maxima += 1

print("Number of Maxima:", maxima)
print("Number of Minima:", minima)
