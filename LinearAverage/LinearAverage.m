format long

a = 0; 
b = pi;
n = 1000
f = @(x) ( x*x ); 

dx = (b-a)/(n+1)
hL = 0;

for i=a+dx:dx:b-dx 
    xL = ( (a+dx) + (i-dx) );
    hL = hL + ( f(xL) * ((b-dx) - (a+dx)) );
end

LinearAverageResult = hL / n
