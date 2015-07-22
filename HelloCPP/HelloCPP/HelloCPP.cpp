#include <iostream> 
#include "HelloWorld.h"
using namespace std;


int main() {
	
	int chose = int();
	cout << "\n";
	cout << "1.入門基礎練習\n";
	cout << "請選擇: ";
	cin >> chose;
	cout << "您選擇：" << chose << "\n";

	switch (chose) {
	case 1:
		helloWorld();
		break;
	default:
		helloWorld();
	}

	

	system("Pause");
	return 0;
}

