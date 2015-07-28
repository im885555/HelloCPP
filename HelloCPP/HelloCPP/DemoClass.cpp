#include "DemoClass.h"


DemoClass::DemoClass() {
	exec();
}
int  DemoClass::exec() {
	ConstructorDestructor();
	friendFunctionClass();
	ObjectPointer();
	LocalClasses();
	VirtualFunction();
	PureVirtualFunction();
	RTTI();
	MultiInheritance();
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

void showVirtualFunctionByPtr(VirtualFunction1 *foo) {
	foo->show();
}

void showVirtualFunctionByRef(VirtualFunction1 &foo) {
	foo.show();
}


int DemoClass::VirtualFunction() {
	cout << "\n虛擬函式（Virtual function）\n";

	VirtualFunction1 f1;
	VirtualFunction2 f2;

	// 動態繫結 
	showVirtualFunctionByPtr(&f1);
	showVirtualFunctionByPtr(&f2);
	cout << endl;

	// 動態繫結 
	showVirtualFunctionByRef(f1);
	showVirtualFunctionByRef(f2);
	cout << endl;

	// 靜態繫結 
	f1.show();
	f2.show();


	return 0;
}

int DemoClass::PureVirtualFunction() {
	cout << "\n純虛擬函式、抽象類別（Abstract class）\n";


	ConcreteCircle concrete;
	concrete.radius(10.0);
	render(concrete);

	HollowCircle hollow;
	hollow.radius(20.0);
	render(hollow);
	return 0;
}


void DemoClass::render(AbstractCircle &circle) {
	circle.render();
}

int DemoClass::RTTI() {
	cout << "\n執行時期型態資訊（RTTI）\n";

	Base *ptr; // 基底類別指標 

	Derived1 derived1;
	Derived2 derived2;


	ptr = &derived1;
	cout << "ptr 指向 "
		<< typeid(*ptr).name()
		<< endl;

	ptr = &derived2;
	cout << "ptr 指向 "
		<< typeid(*ptr).name()
		<< endl;

	showWho(&derived1);
	showWho(&derived2);


	cout << "\n使用 dynamic_cast\n";
	showWho(derived1);
	showWho(derived2);
	return 0;
}

void DemoClass::showWho(Base *base) {
	base->foo();

	if (typeid(*base) == typeid(Derived1)) {
		Derived1 *derived1 = static_cast<Derived1*>(base);
		derived1->showOne();
	}
	else if (typeid(*base) == typeid(Derived2)) {
		Derived2 *derived2 = static_cast<Derived2*>(base);
		derived2->showTwo();
	}

}

void DemoClass::showWho(Base &base) {
	try {
		Derived1 derived1 = dynamic_cast<Derived1&>(base);
		derived1.showOne();
	}
	catch (bad_cast) {
		cout << "bad_cast 轉型失敗" << endl;
	}
}

int DemoClass::MultiInheritance() {
	cout << "\n多重繼承\n";


	Welcome welcome;
	Hello hello;

	doRequest(&welcome);
	doRequest(&hello);

	return 0;
}

void DemoClass::doRequest(IRequest *request) {
	request->execute();
}