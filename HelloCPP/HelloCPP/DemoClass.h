#include <iostream> 
#include "SafeArray.h"
#include "VirtualFunction.h"
#include "AbstractCircle.h"
#include "ConcreteCircle.h"
#include "HollowCircle.h"
#include "RTTI.h"
#include "MultiInheritance.h"

using namespace std;

class DemoClass {
public:
	DemoClass();
    int exec();
	int ConstructorDestructor();
    int friendFunctionClass();
	int ObjectPointer();
	int LocalClasses();
	int VirtualFunction();
	int PureVirtualFunction();
	int RTTI();
	int MultiInheritance();
private :
	void render(AbstractCircle &circle);
	void showWho(Base *base);
	void showWho(Base &base);
	void doRequest(IRequest *request);

};

class Ballfriend;

int compareFriend(Ballfriend&, Ballfriend&);

class Ballfriend {
public:
	Ballfriend(double, char*);

	double radius() {
		return _radius;
	}

	char* name() {
		return _name;
	}

	void radius(double radius) {
		_radius = radius;
	}

	void name(char *name) {
		_name = name;
	}

	// �ŧi�B�ͨ禡 
	friend int compareFriend(Ballfriend&, Ballfriend&);

private:
	double _radius; // �b�| 
	char *_name; // �W�� 
};