a = 0
b = 3.14159265358979323846
iterations = 1000

dx = (b - a) / iterations

hL = 0
hR = 0
hM = 0
hT = 0


def f(x):
    return x * x


i = 1
while i < iterations:
    xL = a + (i - 1) * dx
    hL += + f(xL)
    xR = a + i * dx
    hR += + f(xR)
    xM = a + (xL + xR) / 2
    hM += + f(xM)
    xT = (f(xL) + f(xR)) / 2
    hT += + xT
    i += 1

LeftRectangularResult = hL * dx
RightRectangularResult = hR * dx
MidPointResult = hM * dx
TrapezoidalResult = hT * dx

print("Left Rectangular Result: %.5f\n" % LeftRectangularResult)
print("Right Rectangular Result: %.5f\n" % RightRectangularResult)
print("MidPoint Result: %.5f\n" % MidPointResult)
print("Trapezoidal Result: %.5f\n" % TrapezoidalResult)
