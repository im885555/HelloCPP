#include <algorithm>
#include <iostream> 
#include <vector>
#include <string> 
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
	cStyle();
	stringPrac();
	pointer();
	pointerArithmetic();
	pointerAndArray();
	newDelete();

	doublePointer();
	pointerAndString();

	reference();

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
	int search = 31;
	cout << search;

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

int advanced::cStyle(){
	cout << "\n�r���}�C�]C-style �r��^\n";

	char str[] = "hello";

	for (int i = 0; i < (sizeof(str) / sizeof(str[0])); i++) {
		if (str[i] == '\0')
			cout << " null";
		else
			cout << " " << str[i];
	}
	cout << endl;


	char str1[80] = { '\0' };
	char str2[] = "caterpillar";

	cout << "str1: " << str1 << endl
		<< "str2: " << str2 << endl
		<< endl;

	// �Nstr2�ƻs��str1 
	strcpy(str1, str2);
	cout << "str1: " << str1 << endl
		<< "str2: " << str2 << endl
		<< endl;

	// �Nstr2���bstr1�� 
	strcat(str1, str2);
	cout << "str1: " << str1 << endl
		<< "str2: " << str2 << endl
		<< endl;

	cout << "str1���סG" << strlen(str1) << endl
		<< "str2���סG" << strlen(str2) << endl
		<< endl;

	cout << "str1�Pstr2����G" << strcmp(str1, str2) << endl
		<< endl;

	return 0;
}

int advanced::stringPrac(){
	cout << "\n�ϥ� string ���A\n";

	
	string str1;
	string str2("caterpillar");
	string str3(str2);

	if (str1.empty()) {
		cout << "str1 ���Ŧr��" << endl;
	}

	cout << "str1 ����: " << str1.size() << endl;
	cout << "str2 ����: " << str2.size() << endl;
	cout << "str3 ����: " << str3.size() << endl;

	if (str1 == str2) {
		cout << "str1 �P str2 ���e�ۦP" << endl;
	}

	if (str3 == str2) {
		cout << "str3 �P str2 ���e�ۦP" << endl;
	}

	string name("caterpillar");

	for (int i = 0; i < name.size(); i++) {
		cout << name[i] << endl;
	}

	stringPrac2();

	return 0;
}

int advanced::stringPrac2(){
	string str1;
	string str2("caterpillar");
	string str3(str2);

	// assign: ���w�r�� 
	str1 = str1.assign(str2, 0, 5);
	cout << "str1: " << str1 << endl;
	str1 = str1.assign("caterpillar", 5, 6);
	cout << "str1: " << str1 << endl;

	str1 = "";

	// append: �r��걵 
	str1 = str1.append(str2, 0, 5);
	str1 = str1.append(str3, 5, 6);
	cout << "str1: " << str1 << endl;

	// find: �M��r���m 
	cout << "�M��str1�����Ĥ@��pill: "
		<< str1.find("pill", 0) << endl;

	// insert: ���J�r�� 
	cout << "�bstr1���J�r��***: "
		<< str1.insert(5, "***") << endl;

	cout << "str1����: " << str1.length() << endl;

	return 0;
}

int advanced::pointer(){
	cout << "\n���лP�O�����}\n";

	int var = 10;

	cout << "�ܼ�var���ȡG" << var
		<< endl;
	cout << "�ܼ�var���O�����}�G" << &var
		<< endl;

	pointer2();
	
	return 0;
}

int advanced::pointer2(){
	int var = 10;
	int *ptr = &var;

	cout << "�ܼ�var����}�G" << &var
		<< endl;
	cout << "����ptr���V����}�G" << ptr
		<< endl;

	pointer3();

	return 0;
}

int advanced::pointer3(){
	int var = 10;
	int *ptr = &var;

	cout << "����ptr�x�s���ȡG" << ptr
		<< endl;
	cout << "���Xptr���V���O�����m���ȡG" << *ptr
		<< endl;

	pointer4();

	return 0;
}

int advanced::pointer4(){
	int var = 10;
	int *ptr = &var;

	cout << "var = " << var
		<< endl;
	cout << "*ptr = " << *ptr
		<< endl;

	*ptr = 20;

	cout << "var = " << var
		<< endl;
	cout << "*ptr = " << *ptr
		<< endl;

	pointer5();

	return 0;
}

int advanced::pointer5(){
	int var = 10;
	void *vptr = &var;

	// �U���o�y���i��Avoid���A���Ф��i���� 
	//cout << *vptr << endl;

	// �૬��int���A���Шë��w��iptr 
	int *iptr = reinterpret_cast<int*>(vptr);
	cout << *iptr << endl;

	pointer6();

	return 0;
}

int advanced::pointer6(){
	int var = 10;

	cout << "var = " << var << endl;

	foo(&var);

	cout << "var = " << var << endl;

	return 0;
}

void advanced::foo(const int* p) {
	int* v = const_cast<int*> (p);
	*v = 20;
}


int advanced::pointerArithmetic(){
	cout << "\n���Ъ��B��\n";

	int *ptr = 0;

	cout << "ptr��m�G" << ptr
		<< endl;
	cout << "ptr+1�G" << ptr + 1
		<< endl;
	cout << "ptr+2�G" << ptr + 2
		<< endl;

	pointerArithmetic2();
	return 0;
}
int advanced::pointerArithmetic2(){

	double *ptr = 0;

	cout << "ptr��m�G" << ptr
		<< endl;
	cout << "ptr+1�G" << ptr + 1
		<< endl;
	cout << "ptr+2�G" << ptr + 2
		<< endl;


	return 0;
}


int advanced::pointerAndArray(){
	cout << "\n���лP�}�C\n";

	int arr[10] = { 0 };
	cout << "arr :\t\t" << arr
		<< endl;
	cout << "&arr[0]: \t" << &arr[0]
		<< endl;


	pointerAndArray2();
	return 0;
}

int advanced::pointerAndArray2(){

	const int length = 10;
	int arr[length] = { 0 };
	int *ptr = arr;

	for (int i = 0; i < length; i++) {
		cout << "&arr[" << i << "]: " << &arr[i];
		cout << "\tptr+" << i << ": " << ptr + i;
		cout << endl;
	}


	pointerAndArray3();
	return 0;
}

int advanced::pointerAndArray3(){

	const int length = 5;
	int arr[length] = { 10, 20, 30, 40, 50 };
	int *ptr = arr;

	// �H���Ф覡�s����� 
	for (int i = 0; i < length; i++) {
		cout << "*(ptr+" << i << "): " << *(ptr + i)
			<< endl;
	}
	cout << endl;

	// �H�}�C�覡�s����� 
	for (int i = 0; i < length; i++) {
		cout << "ptr[" << i << "]: " << ptr[i]
			<< endl;
	}
	cout << endl;

	// �H���Ф覡�s����� 
	for (int i = 0; i < length; i++) {
		cout << "*(arr+" << i << "): " << *(arr + i)
			<< endl;
	}
	cout << endl;

	// �H�}�C�覡�s����� 
	for (int i = 0; i < length; i++) {
		cout << "arr[" << i << "]: " << arr[i]
			<< endl;
	}
	cout << endl;

	return 0;
}


int advanced::newDelete(){
	cout << "\nnew �B��l�P delete �B��l\n";

	int *ptr = new int(100);

	cout << "�Ŷ���m:" << ptr
		<< endl;
	cout << "�Ŷ��x�s�ȡG" << *ptr
		<< endl;

	*ptr = 200;

	cout << "�Ŷ���m:" << ptr
		<< endl;
	cout << "�Ŷ��x�s�ȡG" << *ptr
		<< endl;

	delete ptr;
	newDelete2();
	return 0;
}

int advanced::newDelete2(){

	int size = 5;

	int *arr = new int[size];

	cout << "���w�����ȡG" << endl;
	for (int i = 0; i < size; i++) {
		cout << "arr[" << i << "] = " << i <<endl;
		*(arr + i) = i;
	}

	cout << "��ܤ����ȡG" << endl;
	for (int i = 0; i < size; i++) {
		cout << "arr[" << i << "] = " << *(arr + i)
			<< endl;
	}

	delete[] arr;

	newDelete3();

	return 0;
}

int advanced::newDelete3(){

	int m = 4;
	int n = 5;


	int *ptr = new int[m*n];

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			*(ptr + n*i + j) = i + j;
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << *(ptr + n*i + j) << "\t";
		}
		cout << endl;
	}

	delete[] ptr;

	return 0;
}

int advanced::doublePointer(){
	cout << "\n��������\n";

	int p = 10;
	int *ptr = &p;

	cout << "p���ȡG" << p
		<< endl;
	cout << "p���O�����m: " << &p
		<< endl;
	cout << "*ptr�ѷӪ���: " << *ptr
		<< endl;

	cout << "ptr�x�s����}��: " << ptr
		<< endl;
	cout << "ptr���O�����m: " << &ptr
		<< endl;


	doublePointer2();
	return 0;
}

int advanced::doublePointer2(){

	int p = 10;
	int *ptr1 = &p;
	int **ptr2 = &ptr1;

	cout << "p���ȡG" << p << endl;
	cout << "p���O�����m: " << &p << endl;

	cout << endl;

	cout << "*ptr1 = " << *ptr1 << endl;
	cout << "ptr1 = " << ptr1 << endl;
	cout << "ptr1���O�����m: " << &ptr1 << endl;

	cout << endl;

	cout << "**ptr2 = " << **ptr2 << endl;
	cout << "*ptr2 = " << *ptr2 << endl;
	cout << "ptr2 = " << ptr2 << endl;

	cout << endl;

	cout << "��z(���x�s�F�֡H)�G" << endl;
	cout << "&p = " << &p << "\t\t" << "ptr1 = " << ptr1 << endl;
	cout << "&ptr1 = " << &ptr1 << "\t"
		<< "ptr2 = " << ptr2
		<< endl;


	return 0;
}


int advanced::pointerAndString(){
	cout << "\n���лP�r��\n";

	char *str = "hello";
	cout << str << endl;

	str = "world";
	cout << str << endl;

	pointerAndString2();
	return 0;
}


int advanced::pointerAndString2(){

	char *str = "hello";
	void *add = 0;

	add = str;
	cout << str << "\t"
		<< add << endl;

	str = "world";
	add = str;
	cout << str << "\t"
		<< add << endl;

	pointerAndString3();
	return 0;
}


int advanced::pointerAndString3(){

	char *str[] = { "professor", "teacher",
		"student", "etc." };

	for (int i = 0; i < 4; i++)
		cout << str[i] << endl;


	pointerAndString4();
	return 0;
}


int advanced::pointerAndString4(){
	char *str[][2] = { "professor", "Justin",
		"teacher", "Momor",
		"student", "Caterpillar" };

	for (int i = 0; i < 3; i++) {
		cout << str[i][0] << ": "
			<< str[i][1] << endl;
	}


	return 0;
}


int advanced::reference(){
	cout << "\n�Ѧҡ]Reference�^\n";

	int var = 10;
	int &ref = var;

	cout << "var: " << var
		<< endl;
	cout << "ref: " << ref
		<< endl;

	ref = 20;

	cout << "var: " << var
		<< endl;
	cout << "ref: " << ref
		<< endl;

	return 0;
}

