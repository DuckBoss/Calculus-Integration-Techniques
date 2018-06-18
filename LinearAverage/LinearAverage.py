a = 0
b = 3.14159265358979323846
iterations = 1000
dx = (b - a) / (iterations + 1)
hL = 0
xL = 0

i = a + dx


def func(x):
    return x * x


while i < b - dx:
    xL = ((a + dx) + (i - dx))
    hL += (func(xL) * ((b - dx) - (a + dx)))
    i += dx

print("Linear Average: %.5f" % (hL / iterations))
