#include <iostream> 
using namespace std;


class VirtualFunction1 {
public:
	virtual void show() { // 虛擬函式 
		cout << "Foo1's show" << endl;
	}
};

class VirtualFunction2 : public VirtualFunction1 {
public:
	virtual void show() { // 虛擬函式 
		cout << "Foo2's show" << endl;
	}
};

