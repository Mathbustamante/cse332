1.Zihao Chen
2.The program will throw an exception and print out the error message related to this error.
"error occured: index out of bound"
3.The catch statement should catch out_of_range first. Since out_of_range inherits from logic_error, both types exception can be
caught by logic_error. Therefore there is no way to determine which function threw an exception. It is not necessary to throw 
out_of_bound exception because when squareElement function is called it will throw out_of_range exception if the index is out of bound. 
4.two valid indices: 8 square divided by 2 square equals to 16
second index out of bound: error occured: index out of bound
second index points to 0: denom is smaller than 0