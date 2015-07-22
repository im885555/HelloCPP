#include <iostream> 
#include "HelloWorld.h"
#include "Advanced.h"
using namespace std;


int main() {
	
	int chose = int();
	cout << "\n";
	cout << "1.入門基礎練習\n";
	cout << "2.進階型態\n";
	cout << "請選擇: ";
	cin >> chose;
	cout << "您選擇：" << chose << "\n";

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

