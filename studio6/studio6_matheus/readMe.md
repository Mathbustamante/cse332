#Group Members:
	1. Matheus Bustamante
	2. Zihao Chen

1. I got an error saying debug assertion Failed. And asked me to abort. 

2. If I put the method in a try-catch block, I will still receive the error. 
When I put an if stetement to thrwo the error in my function, the an exception iss thrown.

3.Since out_of_bouds is a more specific exeption it should come first. logic_error is a more 
general exception that is thrown when there is an error in the logic of the program.
Since we already calling an out of bounds exception in squareElement we dont need to call it again in 
divideSquaredElements because divideSquaredElements calls squareElement. 

4. 
Call: divideSquaredElements(my_vec, 2, 0) with valid inputs:
H:\332\studios\Studio6\development_environment_studio6\Debug>development_environment_studio6.exe
4

Call divideSquaredElements(my_vec, 2, 0); with dividing it by zero:
H:\332\studios\Studio6\development_environment_studio6\Debug>development_environment_studio6.exe
This exception represents the logic_error

Call  divideSquaredElements(my_vec, 2, 8) with invalid index:
H:\332\studios\Studio6\development_environment_studio6\Debug>development_environment_studio6.exe
This exception represents out_of_bouds
