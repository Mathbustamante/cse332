1. Zihao Chen, Matheus Bustamante
2. class Detector {
public:
	Detector();
	~Detector();
	unsigned get_i();
private:
	unsigned i_;
	static unsigned s_i_;
};
unsigned Detector::get_i() {
	return i_;
}

Detector::Detector() {
	i_ = s_i_;
	s_i_ = s_i_ + 1;
	cout << "Detector()" << endl;
	cout << this << endl;
	cout << i_ << endl;
}

Detector::~Detector() {
	cout << "~Detector()" << endl;
	cout << this << endl;
	cout << i_ << endl;
}

3. Destructor is called to delete the class object on the heap.

4. The shared_ptr in main destroys the object. That happens when
main function reaches the end. The object is deleted once. No aliases
remain, since the shared_ptr only destroys the object once there's no
usade of it in the program.

5. In previous exercise, there's no new detector object being created.
The new shared_ptr points to the same object. In this exercise, 3 new
detector objects are created and thus, the number of objects differs
from previous one.

6. H:\CSE 332\Studio13\studio13\Debug>studio13.exe
main begin
Detector(); adds: 009B8B74; i: 0
Detector(); adds: 009B832C; i: 1
Detector(); adds: 009B4734; i: 2
Detector(); adds: 009BF8C4; i: 3
009B8B74009B832C009B4734009BF8C4
009B8B74009B832C009B4734009BF8C4
main end
~Detector(); adds: 009BF8C4; i: 3
~Detector(); adds: 009B4734; i: 2
~Detector(); adds: 009B832C; i: 1
~Detector(); adds: 009B8B74; i: 0
They points to the same object on heap.

7. Vector will clean up the local variables that points to the
detector object but not the object itself