#include <iostream> 
#include <typeinfo> 
using namespace std;

class Base {
public:
	virtual void foo() = 0;
};

class Derived1 : public Base {
public:
	void foo() {
		cout << "Derived1" << endl;
	}

	void showOne() {
		cout << "Yes! It's Derived1." << endl;
	}
};

class Derived2 : public Base {
public:
	void foo() {
		cout << "Derived2" << endl;
	}

	void showTwo() {
		cout << "Yes! It's Derived2." << endl;
	}
};