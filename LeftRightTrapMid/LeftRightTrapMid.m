format long

a = 0;
b = pi;
n = 1000
f = @(x) (x*x);
dx = (b-a)/n;

hL = 0;
hR = 0;
hM = 0;
hT = 0;

for i = 1:1:n
    xL = a + (i-1) * dx;
    hL = hL + f(xL);
    
    xR = a + (i) * dx;
    hR = hR + f(xR);
    
    xM = (xL + xR)/2;
    hM = hM + f(xM);
    
    xT = (f(xL) + f(xR))/2;
    hT = hT + xT;
end

LeftRectangularResult = hL * dx
RightRectangularRest = hR * dx
MidPointResult = hM * dx
TrapezoidResult = hT * dx
