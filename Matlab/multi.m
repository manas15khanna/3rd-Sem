number=input('Enter a number:');
fprintf('Multiplication table of %d:\n', number)
for i = 1:10
  result=number*i;
  fprintf('%d x %d = %d\n', number, i, result)
end
