a=[1,2,3;4,5,6;7,8,9];
b=[9,8,7;6,5,4;3,2,1];

%Addition
c=a+b;
disp('Addition: ')
disp(c);

%Subtraction
d=a-b;
disp('Subtraction: ')
disp(d);

%Multiplication
e=a*b;
disp('Multiplication:')
disp(e);

%Multplying every element
f=a.*b;
disp('Multplying every element:')
disp(f);

%Transpose
g=a';
disp('Transpose: ')
disp(g);

%Dividing every element
h=a./b;
disp('Dividing every element: ')
disp(h);

%Squaring the Matrix
i=a^2;
disp('Squaring the matrix: ')
disp(i);

%Squaring every element
j=a.^b;
disp('Squaring every element: ')
disp(j);

%Matrix Concatination Horizontal
k=[a b];
disp('Matrix Concatination Horizontal: ')
disp(k);

%Matrix Concatination Vertical
l=a;b;
disp('Matrix Concatination Vertical: ')
disp(l);
