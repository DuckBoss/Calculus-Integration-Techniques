format long

a = 0.1;
b = pi;
aOld = 0;
aNew = 0;
n = 8;
f = @(x) (x*x);.
dx = (b-a)/n;

hS = 0;


for i = 1:2:n
    xS = a + (i-1) * dx;
    hS = hS + f(xS) + 4 * f(xS + dx) + f(xS + 2 * dx);
end
aNew = hS * dx/3;

while(abs(aOld - aNew) > 0.00001)
    aOld = aNew;
    n = n + 2;
    dx = (b-a)/n;
    hS = 0;
    for i = 1:2:n
        xS = a + (i-1) * dx;
        hS = hS + f(xS) + 4 * f(xS + dx) + f(xS + 2 * dx);
    end
    aNew = hS * dx/3;
end

finalN = n
finalArea = aNew
