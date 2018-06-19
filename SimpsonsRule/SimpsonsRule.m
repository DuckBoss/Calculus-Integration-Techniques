format long

a = 0.1; % a -> lower bound.
b = pi; % b -> upper bound.
aOld = 0; % aOld -> Keeps track of old area value.
aNew = 0; % aNew -> Keeps track of new area value.
n = 8; % n -> starting iterations.
f = @(x) (x*x); % f -> the function being integrated.
dx = (b-a)/n; % dx -> (upperbound - lowerbound / iterations). This is the change in x;

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
