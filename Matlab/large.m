a=input('First Number:');
b=input('Second Number:');
c=input('Third Number:');
if (a>b && a>c)
  great=a;
elseif (b>a && b>c)
  great=b;
elseif (c>a && c>b)
  great=c;
end 
fprintf('%d is the largest',great)
