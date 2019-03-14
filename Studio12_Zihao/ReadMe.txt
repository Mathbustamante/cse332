Zihao Chen
Matheus Bustamante

In main, an object of class A is declared thus the default constructor of A is called, printing "A()".
An object of B is created, since B inherited from A, both constructors will be called, printing "A() B()".
The default destructor will be called to clear the memory of these two objects in reverse orders.
Thus "~B() ~A() ~A()"

H:\CSE 332\Studio12\studio12\Debug>studio12.exe
A()
A()
B()
a.foo()
A::foo()
b.foo()
B::foo()
a_r1.foo()
A::foo()
a_r2.foo()
A::foo()
b_r.foo()
B::foo()
~B()
~A()
~A()
Yes, the result matches the expectation.
When the reference of type A that aligns with obeject of B calls foo(),
the results are different. If foo is non-virtual, the foo() is A is called,
otherwise, foo() in B is called. The virtual key word indicates that the
foo() function in derived class overides the foo() function in base class.

Pointers and references behave the same way. Virtual key word still indicates
overide in this case. Thus, no difference. 

With virtual keyword, the destructor of derived class overides the destructor
of its base class. Thus "~B(), ~A()" for A *ap = new B

a) When the object is of type base class. b) When the object is of type derived 
class. Reference works in same way as value. 