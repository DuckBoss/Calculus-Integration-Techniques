a = 0.1
b = 3.14159265358979323846
aOld = 0.0
aNew = 0.0
n = 1000.0
dx = (b - a) / n

# The 2nd derivative of f((a+b)/2)
ddf = 2.0

hM = 0
hVol = 0


def f(x):
    return x * x


i = 0
while i < n:
    xM = a + (i - 1) * dx + dx / 2
    hM = hM + xM
    i += 1

aNew = hM * dx + (b-a) * (dx*dx) / 24 * ddf

while abs(aOld - aNew) > 0.00001:
    aOld = aNew
    n = n + 2
    dx = (b - a) / n
    hM = 0
    i = 0
    while i < n:
        xM = a + (i - 1) * dx + dx / 2
        hM = hM + f(xM)
        i += 1
    aNew = hM * dx + (b-a) * (dx*dx) / 24 * ddf

finalArea = aNew
print("Composite MidPoint Rule: %.5f" % finalArea)
