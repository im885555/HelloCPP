#include <iostream> 
#include "HelloWorld.h" 
using namespace std;


helloWorld::helloWorld(){
	cout << "Hello! World!\n";
	cout << "���o! C++!\n";
	exec();
}

int helloWorld::exec(){

	dataType();
	literalConstant();
	variable();
	
	return 0;
}


int helloWorld::dataType(){

	cout << "\n��ƫ��A!\n";
	cout << "\n���A\t�j�p(bytes)";
	cout << "\nint\t" << sizeof(int);
	cout << "\nlong\t" << sizeof(long);
	cout << "\nfloat\t" << sizeof(float);
	cout << "\ndouble\t" << sizeof(double);
	cout << "\nchar\t" << sizeof(char);
	cout << "\n";

	cout << "sizeof(bool)\t" << sizeof(bool) << "\n";
	cout << "sizeof(true)\t" << sizeof(true) << "\n";
	cout << "sizeof(false)\t" << sizeof(false) << "\n";

	cout << "true\t" << static_cast<int>(true) << "\n";
	cout << "false\t" << static_cast<int>(false) << "\n";

	return 0;
}

int helloWorld::literalConstant(){
	cout << "\n�r���`�q!\n";
	cout << "sizeof(1): " << sizeof(1) << "\n";
	cout << "sizeof(1.0): " << sizeof(1.0) << "\n";

	cout << 26 << "\n"; // 10�i��
	cout << 032 << "\n"; // 8�i��
	cout << 0x1A << "\n"; // 16�i��

	return 0;
}



int helloWorld::variable(){
	int ageForStudent;
	double scoreForStudent;
	char levelForStudent = char();


	ageForStudent = 5;
	scoreForStudent = 80.0;
	levelForStudent = 'B';

	cout << "\n�~��\t�o��\t����";
	cout << "\n" << ageForStudent
		<< "\t" << scoreForStudent
		<< "\t" << levelForStudent
		<< "\n";


	return 0;
}