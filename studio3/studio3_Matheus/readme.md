Group Members: (This studio was done for practice purpuse) I worked together with Zihao Chen in this studio which can be found on his repository.
	1. Matheus Bustamante (mbustamante)

//////////////////////////////////////////////

1. When printing argv[0] the output was: development_environment_studio3.exe
2. It tells that argv[0] stores the name of the program.

3. My program printed each character one under the other until it reached the end of the program name.

4. The same cant be done using a reference because once initialized a reference remains bound to 
its initial object and a reference cannot point to different objects in its life time. Also, references
 needs to be initialized at the time it is defined, no need to dereference a reference to access the object.

 5. I did not observe any difference on the output. The auto keyword deduces the data type I should use.

 6. auto * p = *argv: p is a pointer to every character of argv. Since argv is already declared as a pointer, if we direference it,
	we are able to access the first character in argv[0];
    auto * p = argv: p is a pointer to the first string in argv. 
    *p iterates until the last element in argv.
