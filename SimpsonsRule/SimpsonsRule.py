a = 0.1
b = 3.14159265358979323846
aNew = 0
iterations = 1000

dx = (b - a) / iterations
hS = 0
xS = 0

def func(x):
    return x * x

i = 1
while i < iterations:
    xS = a + (i - 1) * dx
    hS += func(xS) + 4 * func(xS + dx) + func(xS + 2 * dx)
    i += 2
aNew = hS * dx / 3

finalArea = aNew
print("Simpson's Rule: %.5f" % finalArea)

