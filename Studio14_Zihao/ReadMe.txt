1. Zihao Chen, Matheus Bustamante
2. Two objects are created and the two objects are destroyed.
3. Two objects are created and the object of wrapper class is
destroyed. The object of detector on the heap is not destroyed
because no delete statement is called upon it. 
4. Two objects are created and two are destroyed because delete
is called upon the pointer variable.
5. The detector object is deleted once and created once. If there's
no such boolean variable. The second wrapper objects will delete
the detector object, that may cause problem if we try to access the
pointer variable in the first wrapper object. The first wrapper obj
is responsible for deleting the detector obj.
6. Two unique detector objects are created that have the same content.