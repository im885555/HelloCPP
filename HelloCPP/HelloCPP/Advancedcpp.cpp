#include <algorithm>
#include <iostream> 
#include <vector>
#include "Advanced.h" 
using namespace std;



advanced::advanced(){
	exec();
}

int advanced::exec(){

	oneDimArray();
	twoDimArray();
	arrayIdiom();
	stlIdiom();

	return 0;
}



int advanced::oneDimArray(){
	cout << "\n�@���}�C!\n";

	const int length = 10;
	int iarr[length] = { 0 };

	for (int i = 0; i < length; i++)
		cout << iarr[i] << " ";
	cout << endl;

	for (int i = 0; i < length; i++)
		iarr[i] = i;

	for (int i = 0; i < length; i++)
		cout << iarr[i] << " ";
	cout << endl;

	return 0;
}

int advanced::twoDimArray(){
	cout << "\n�G���}�C!\n";


	const int row = 5;
	const int column = 10;
	int iarr[row][column];

	for (int i = 0; i < row; i++)
		for (int j = 0; j < column; j++)
			iarr[i][j] = (i + 1) * (j + 1);

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++)
			cout << iarr[i][j] << "\t";
		cout << endl;
	}

	return 0;
}

int advanced::arrayIdiom(){
	cout << "\n�}�C�����]Array idiom�^ vector!\n";


	vector<int> ivector(10);

	for (int i = 0; i < ivector.size(); i++) {
		ivector[i] = i;
	}

	for (int i = 0; i < ivector.size(); i++) {
		cout << ivector[i] << " ";
	}
	cout << endl;

	arrayIdiom2();
	return 0;
}


int advanced::arrayIdiom2(){

	int iarr[] = { 1, 2, 3, 4, 5 };

	vector<int> ivector(iarr, iarr + 5);

	for (int i = 0; i < ivector.size(); i++) {
		cout << ivector[i] << " ";
	}
	cout << endl;

	arrayIdiom3();

	return 0;
}

int advanced::arrayIdiom3(){

	int iarr[] = { 1, 2, 3, 4, 5 };

	vector<int> ivector(iarr + 1, iarr + 4);

	for (int i = 0; i < ivector.size(); i++) {
		cout << ivector[i] << " ";
	}
	cout << endl;

	arrayIdiom4();

	return 0;
}

int advanced::arrayIdiom4(){

	vector<int> ivector1(5, 1);
	vector<int> ivector2; // �w�q�@�ӪŪ�vector

	ivector2 = ivector1;

	for (int i = 0; i < ivector2.size(); i++) {
		cout << ivector2[i] << " ";
	}
	cout << endl;

	ivector2[0] = 2;

	for (int i = 0; i < ivector2.size(); i++) {
		cout << ivector2[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < ivector1.size(); i++) {
		cout << ivector1[i] << " ";
	}
	cout << endl;

	return 0;
}

int advanced::stlIdiom(){
	cout << "\nSTL �����]STL idiom�^ vector!\n";

	vector<int> ivector;

	for (int i = 0; i < 10; i++) {
		ivector.push_back(i);
	}

	for (vector<int>::iterator it = ivector.begin();
		it != ivector.end();
		it++) {

		cout << *it << " ";
	}
	cout << endl;

	cout << "capacity: " << ivector.capacity() << endl
		<< "size: " << ivector.size() << endl;

	stlIdiom2();
	return 0;
}

int advanced::stlIdiom2(){
	int iarr[] = { 30, 12, 55, 31, 98, 11, 41, 80, 66, 21 };
	vector<int> ivector(iarr, iarr + 10);

	// �Ƨ� 
	sort(ivector.begin(), ivector.end());

	for (vector<int>::iterator it = ivector.begin();
		it != ivector.end();
		it++) {

		cout << *it << " ";
	}
	cout << endl;

	cout << "��J�j�M�ȡG";
	int search = 0;
	cin >> search;

	vector<int>::iterator it =
		find(ivector.begin(), ivector.end(), search);

	if (it != ivector.end()) {
		cout << "���j�M�ȡI" << endl;
	}
	else {
		cout << "�䤣��j�M�ȡI" << endl;
	}

	// ���� 
	reverse(ivector.begin(), ivector.end());

	for (vector<int>::iterator it = ivector.begin();
		it != ivector.end();
		it++) {

		cout << *it << " ";
	}
	cout << endl;
	return 0;
}