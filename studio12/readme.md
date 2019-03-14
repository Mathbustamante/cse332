Group: Matheus Bustamante
	   Zihao Chen

1. Output:

H:\332\studios\Studio12\development_environment_studio12\Debug>development_environment_studio12.exe
This is my constructor from class A
This is my constructor from class A
This is my constructor from class B
This is my destructor from class B
This is my destructor from class A
This is my destructor from class A

The destructor only runs when the constructor object is destroid. At first the a object calls the constructor 'a'.
Now when calling the derived class B, the constructor of this class calls the constructor if the parent class, resulting in 
the constructor from class A being printed twice. Same when the constructor is destroid and the destructor called.

2. Output:

No virtual:
Calling same_function with object a:
SameName function Class A
Calling same_function with object b:
SameName function Class B
Calling same_function with object ref1A:
SameName function Class A
Calling same_function with object ref2A:
SameName function Class A
Calling same_function with object ref1B:
SameName function Class B
Yes it is.

Virtual:
Calling same_function with object a:
SameName function Class A
Calling same_function with object b:
SameName function Class B
Calling same_function with object ref1A:
SameName function Class A
Calling same_function with object ref2A:
SameName function Class B
Calling same_function with object ref1B:
SameName function Class B

The output differ when calling the second reference of the class A. 
I believe it is happening because declaring a virtual method with the
same name in both the base and derived class can overrite in derived classes.

3. 
No virtual:
Calling same_function with object a:
SameName function Class A
Calling same_function with object b:
SameName function Class B
Calling same_function with object point1A:
SameName function Class A
Calling same_function with object point2A:
SameName function Class A
Calling same_function with object point1B:
SameName function Class B

Virtual:
Calling same_function with object a:
SameName function Class A
Calling same_function with object b:
SameName function Class B
Calling same_function with object point1A:
SameName function Class A
Calling same_function with object point2A:
SameName function Class B
Calling same_function with object point1B:
SameName function Class B

Because for them both the base class vary dynamically.

4. 
Not virtual:
This is my constructor from class A
This is my constructor from class A
This is my constructor from class B
This is my constructor from class A
This is my constructor from class A
This is my constructor from class B
This is my constructor from class A
This is my constructor from class B
This is my destructor from class A
This is my destructor from class A
This is my destructor from class B
This is my destructor from class A
This is my destructor from class B
This is my destructor from class A
This is my destructor from class A

Virtual:
This is my constructor from class A
This is my constructor from class A
This is my constructor from class B
This is my constructor from class A
This is my constructor from class A
This is my constructor from class B
This is my constructor from class A
This is my constructor from class B
This is my destructor from class A
This is my destructor from class B
This is my destructor from class A
This is my destructor from class B
This is my destructor from class A
This is my destructor from class B
This is my destructor from class A
This is my destructor from class A

