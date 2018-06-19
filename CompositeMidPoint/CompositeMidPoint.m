format long

a = 0.1;
b = pi;
aOld = 0;
aNew = 0;
n = 1000; 
dx = (b-a)/n;

% The 2nd derivative of f((a+b)/2)
ddf = 2;
f = @(x) (x*x); 

hM = 0;
hVol = 0;

for i = 1:1:n
    xM = a + (i-1) * dx + dx/2;
    hM = hM + xM;
end
aNew = hM * dx + (b-a) * dx^2 / 24 * ddf;

while(abs(aOld - aNew) > 0.00001)
    aOld = aNew;
    n = n + 2;
    dx = (b-a)/n;
    hM = 0;
    for i = 1:1:n
        % Composite Midpoint Rule
        xM = a + (i-1) * dx + dx/2;
        hM = hM + f(xM);
    end
    aNew = hM * dx + (b-a) * dx^2 / 24 * ddf;
end


finalArea = aNew
