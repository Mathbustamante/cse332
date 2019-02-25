1. Zihao Chen
   Matheus Bustamante
2. In the first case, since no constructor is declared, a default constructor is created and initialized the values of member variables to 0.
In the second case, a default constructor is declared and defined in source file. The member variables were initialized to 0 as well. 
3. In class, the member variables are by default private, thus can not be accessed outside the scope of the class, unless by friended functions.
The memember variables of struct are public, thus can be called outside. 
4. H:\CSE 332\Studio8\studio8\Debug>studio8.exe
non_const original: 1
const original: 1
changed val for non_const class object: 2
5. The copy constructor provided by the compiler copies the values of members of the object passed into it
to the members of this object.
H:\CSE 332\Studio8\studio8\Debug>studio8.exe
non_const original: 1
const original: 1
changed val for non_const class object: 2
m.x = 1 and m.y = 1
m.x = 7and m.y = 3
n.x = 7 and n.y = 3
6. Once the user defines a copy constructor the default constructor provided by the compiler doesn't exist
thus if the declaration of class object doesn't follow the parameterized constructor, the compiler will complain.