
#include <iostream>
using namespace std;

class IRequest {
public:
	virtual void execute() = 0;
};


class SomeObject {
public:
	virtual void someFunction() {
		cout << "do something" << endl;
	}

private:
	void otherFunction() {
		cout << "do other" << endl;
	}
};


class Welcome : public SomeObject, public IRequest {
public:
	void execute() {
		cout << "Welcome!!" << endl;
	}
};

class Hello : public SomeObject, public IRequest {
public:
	void execute() {
		cout << "Hello!!" << endl;
	}
};

