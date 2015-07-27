#include <iostream> 
#include "DemoClass.h"
#include "SafeArray.h"
using namespace std;


DemoClass::DemoClass() {
	exec();
}
int  DemoClass::exec() {
	ConstructorDestructor();
	friendFunctionClass();
	ObjectPointer();
	LocalClasses();
	return 0;
}

int DemoClass:: ConstructorDestructor() {
	cout << "\n建構函式、解構函 式\n";

	SafeArray safeArray(10);

	for (int i = 0; i < safeArray.length; i++) {
		safeArray.set(i, (i + 1) * 10);
	}

	for (int i = 0; i < safeArray.length; i++) {
		cout << safeArray.get(i) << " ";
	}
	cout << endl;

	return 0;
}

int DemoClass::ObjectPointer() {

	cout << "\n物件指標\n";


	SafeArray *safeArray = new SafeArray(10);

	for (int i = 0; i < safeArray->length; i++) {
		safeArray->set(i, (i + 1) * 10);
	}

	for (int i = 0; i < safeArray->length; i++) {
		cout << safeArray->get(i) << " ";
	}
	cout << endl;

	delete safeArray;

	SafeArray arrs[] = { SafeArray(5), SafeArray(10), SafeArray(15) };

	for (int i = 0; i < 3; i++) {
		SafeArray *safeArray = arrs + i;
		for (int j = 0; j < safeArray->length; j++) {
			safeArray->set(j, (j + 1) * 10);
		}
	}

	for (int i = 0; i < 3; i++) {
		SafeArray *safeArray = arrs + i;
		for (int j = 0; j < safeArray->length; j++) {
			cout << safeArray->get(j) << " ";
		}
		cout << endl;
	}



	return 0;
}

int DemoClass::LocalClasses() {
	
	cout << "\n區域類別\n";
	
	// 區域類別
	class Point {
	public:
		int x;
		int y;
		Point(int x, int y) {
			this->x = x;
			this->y = y;
		}
	};

	Point p(10, 10);

	cout << "(x, y) = ("
		<< p.x << ", "
		<< p.y << ")"
		<< endl;

	return 0;
}

int DemoClass::friendFunctionClass() {

	cout << "\nfriend 函式、friend 類別\n";

	Ballfriend b1(10, "RBall");
	Ballfriend b2(20, "GBall");

	switch (compareFriend(b1, b2)) {
	case 1:
		cout << b1.name() << " 較大" << endl;
		break;
	case 0:
		cout << b1.name() << " 等於 " << b2.name() << endl;
		break;
	case -1:
		cout << b2.name() << " 較大" << endl;
		break;
	}

	
	return 0;
}


int compareFriend(Ballfriend &b1, Ballfriend &b2) {
	// 可直接存取私用成員
	if (b1._radius == b2._radius)
		return 0;
	else if (b1._radius > b2._radius)
		return 1;
	else
		return -1;
}



Ballfriend::Ballfriend(double radius, char *name) {
	_radius = radius;
	_name = name;
}