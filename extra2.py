import numpy as np

def f(x):
    return x**4 - 100*x**2 + 10*x - 2

def derivative(x):
    return 4*x**3 - 200*x + 10

critical_points = []
for i in range(-1, 2):
    root = np.roots([4, 0, -200, 10])
    real_roots = [r.real for r in root if abs(r.imag) < 1e-15]
    
    for r in real_roots:
        if -1 <= r <= 1:
            critical_points.append(r)

critical_values = [(point, f(point)) for point in critical_points]
endpoints = [(-1, f(-1)), (1, f(1))]

all_points = critical_values + endpoints
absolute_min = min(all_points, key=lambda x: x[1])
absolute_max = max(all_points, key=lambda x: x[1])

print("Absolute Minimum:", absolute_min)
print("Absolute Maximum:", absolute_max)
