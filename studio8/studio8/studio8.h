#pragma once
class MyClass
{
public:
	int x() const;
	int y() const;
	MyClass& x(int); 
	MyClass& y(int);
	//
	//MyClass(const MyClass &);
private:
	int x_ = 1;
	int y_ = 1;
};
