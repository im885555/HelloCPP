#include <iostream> 
#include "HelloWorld.h"
#include "Advanced.h"
#include "Recursion.h"
#include "ReturnBy.h"
using namespace std;


int main() {
	
	int chose = int();
	cout << "\n";
	cout << "1.�J����¦�m��\n";
	cout << "2.�i�����A\n";
	cout << "3.���j\n";
	cout << "4.return ���ǭȡB�ǰѦ�\n";
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
	case 3:
		Recursion();
		break;
	case 4:
		ReturnBy();
		break;
	default:
		helloWorld();
	}

	

	system("Pause");
	return 0;
}

