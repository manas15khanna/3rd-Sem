marks = input('Enter the marks (0-100): ');
if marks >= 90
  grade = 'A+';
elseif marks >= 80 
  grade = 'A';
elseif marks >= 70
  grade = 'B+';
elseif marks >= 60
  grade = 'B';
elseif marks >= 50
  grade = 'C';
elseif marks >= 40
  grade = 'D';
else
  grade = 'F';
end

fprintf('The grade of %d marks is %s\n',marks, grade);
