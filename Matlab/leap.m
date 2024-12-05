year = input('Enter a year: ');

if mod(year, 4) == 0 && (mod(year, 100) != 0 || mod(year, 400) == 0)
  disp('Leap Year');
else 
  disp('Not a leap year');
end
