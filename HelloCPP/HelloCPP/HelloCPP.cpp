#include <iostream> 
#include "HelloWorld.h"
#include "Advanced.h"
using namespace std;


int main() {
	
	int chose = int();
	cout << "\n";
	cout << "1.�J����¦�m��\n";
	cout << "2.�i�����A\n";
	cout << "�п��: ";
	cin >> chose;
	cout << "�z��ܡG" << chose << "\n";

	switch (chose) {
	case 1:
		helloWorld();
		break;
	case 2:
		advanced();
		break;
	default:
		helloWorld();
	}

	

	system("Pause");
	return 0;
}

