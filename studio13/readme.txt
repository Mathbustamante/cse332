Group members:
Matheus Bustamante
Zihao Chen

1. 

class Detector {
	private:
		unsigned int x;
		static unsigned int y;
	
	public:
		Detector();

		~Detector();

};

Detector::Detector() {
	Detector::x = Detector::y;
	++Detector::y;

	cout << "Default method. Address: " << hex << &x << endl;
	cout << "Value: " << x << endl;
}

Detector::~Detector() {

	cout << "Destroid method. Address: " << hex << &x << endl;
	cout << "Value: " << x << endl;
}


2. When the detector object goes out of scope, the memory to which the pointer points
is utomatically freed.

3. We can think about it as a reference counter. So we have two pointers so the reference
counter equals two. When one dies my reference counter is now one. When the other dies my reference
counter is now zero, and that is the time when memory is freed.

Looking at the Detector constructor, the Detector is destroid at the end of the function.
When all the references are gone.

Deleted two times.

Since memory is not freed util the last shared_ptr dies, it is important to make sure that 
they dont stay around after hey arent needed anymnore. This may cause a waste of memory.

4. Now we have more Detector objects being destroid. I think it happens because when one of 
the shared pointers in the vector is destroyed, the other elements must stay around in the vector.
Only when all elements are destroyed the vector is destroied.

5. 

Beggining of Main
Default method. Address: 00A9B784
Value: 0
Beggining of other_func
End of other_func
Default method. Address: 00A9B9C4
Value: 1
Default method. Address: 00A9B984
Value: 2
Default method. Address: 00A9BC84
Value: 3
End of Main
Destroid method. Address: 00A9BC84
Value: 3
Destroid method. Address: 00A9B984
Value: 2
Destroid method. Address: 00A9B9C4
Value: 1
Destroid method. Address: 00A9B784
Value: 0

6. 

shared_ptr<Detector> *p1 = new shared_ptr<Detector>;
	shared_ptr<Detector> *p2 = new shared_ptr<Detector>;
	shared_ptr<Detector> *p3 = new shared_ptr<Detector>;

	vector<shared_ptr<Detector>> *vec = new vector<shared_ptr<Detector>>{*p1, *p2, *p3};

	delete p1;
	delete p2;
	delete p3;

	I didnt get anything on the terminal 
