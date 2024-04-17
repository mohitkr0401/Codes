clc;
clear all;
disp('Mohit Kumar');
disp('50176803121');
A = input('Enter the 1st matrix: ')
B = input('Enter the 2nd matrix: ')
Add = A+B;
Sub = A-B;
Mul = A*B;
Inverse = inv(A);
Transpose = A';
Determinant = det(A);
Inverse_B = inv(B);
Transpose_B = B';
Determinant_B = det(B);
disp('Addition of A and B',Add);
disp('Subtraction of A and B',Sub);
disp('Multiplication of A and B',Mul);
disp('Determinant of A',Determinant);
disp('Transpose of A',Transpose);
disp('Inverse of A',Inverse);
disp('Determinant of B',Determinant_B);
disp('Transpose of B',Transpose_B);
disp('Inverse of B',Inverse_B);

