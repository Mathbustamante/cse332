Zihao Chen
Matheus Bustamante

1.2 forward_list only supports push_front, vector only supports push_back,
both list and deque support push_front and push_back. forward_list requires
push backward, since forward_list only grows at the front of the container.

1.3 H:\CSE 332\Studio9\studio9\Debug>studio9.exe
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9

2.1 deque and vector are able to use sort(), since they have random access
to elements within. 

2.2 deque and list are able to use reverse, since they both have bidirectional
iterator. forward_list and vector only have forward iterator