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

	return 0;
}



int advanced::oneDimArray(){
	cout << "\n一維陣列!\n";

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
	cout << "\n二維陣列!\n";


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
	cout << "\n陣列型式（Array idiom） vector!\n";


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
	vector<int> ivector2; // 定義一個空的vector

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
	cout << "\nSTL 型式（STL idiom） vector!\n";

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

	// 排序 
	sort(ivector.begin(), ivector.end());

	for (vector<int>::iterator it = ivector.begin();
		it != ivector.end();
		it++) {

		cout << *it << " ";
	}
	cout << endl;

	cout << "輸入搜尋值：";
	int search = 31;
	cout << search;

	vector<int>::iterator it =
		find(ivector.begin(), ivector.end(), search);

	if (it != ivector.end()) {
		cout << "找到搜尋值！" << endl;
	}
	else {
		cout << "找不到搜尋值！" << endl;
	}

	// 反轉 
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
	cout << "\n字元陣列（C-style 字串）\n";

	char str[] = "hello";

	for (int i = 0; i < (sizeof(str) / sizeof(str[0])); i++) {
		if (str[i] == '\\0')
			cout << " null";
		else
			cout << " " << str[i];
	}
	cout << endl;


	char str1[80] = { '\\0' };
	char str2[] = "caterpillar";

	cout << "str1: " << str1 << endl
		<< "str2: " << str2 << endl
		<< endl;

	// 將str2複製給str1 
	strcpy(str1, str2);
	cout << "str1: " << str1 << endl
		<< "str2: " << str2 << endl
		<< endl;

	// 將str2接在str1後 
	strcat(str1, str2);
	cout << "str1: " << str1 << endl
		<< "str2: " << str2 << endl
		<< endl;

	cout << "str1長度：" << strlen(str1) << endl
		<< "str2長度：" << strlen(str2) << endl
		<< endl;

	cout << "str1與str2比較：" << strcmp(str1, str2) << endl
		<< endl;

	return 0;
}

int advanced::stringPrac(){
	cout << "\n使用 string 型態\n";

	
	string str1;
	string str2("caterpillar");
	string str3(str2);

	if (str1.empty()) {
		cout << "str1 為空字串" << endl;
	}

	cout << "str1 長度: " << str1.size() << endl;
	cout << "str2 長度: " << str2.size() << endl;
	cout << "str3 長度: " << str3.size() << endl;

	if (str1 == str2) {
		cout << "str1 與 str2 內容相同" << endl;
	}

	if (str3 == str2) {
		cout << "str3 與 str2 內容相同" << endl;
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

	// assign: 指定字串 
	str1 = str1.assign(str2, 0, 5);
	cout << "str1: " << str1 << endl;
	str1 = str1.assign("caterpillar", 5, 6);
	cout << "str1: " << str1 << endl;

	str1 = "";

	// append: 字串串接 
	str1 = str1.append(str2, 0, 5);
	str1 = str1.append(str3, 5, 6);
	cout << "str1: " << str1 << endl;

	// find: 尋找字串位置 
	cout << "尋找str1中的第一個pill: "
		<< str1.find("pill", 0) << endl;

	// insert: 插入字串 
	cout << "在str1插入字串***: "
		<< str1.insert(5, "***") << endl;

	cout << "str1長度: " << str1.length() << endl;

	return 0;
}

int advanced::pointer(){
	cout << "\n指標與記憶體位址\n";

	int var = 10;

	cout << "變數var的值：" << var
		<< endl;
	cout << "變數var的記憶體位址：" << &var
		<< endl;

	pointer2();
	
	return 0;
}

int advanced::pointer2(){
	int var = 10;
	int *ptr = &var;

	cout << "變數var的位址：" << &var
		<< endl;
	cout << "指標ptr指向的位址：" << ptr
		<< endl;

	pointer3();

	return 0;
}

int advanced::pointer3(){
	int var = 10;
	int *ptr = &var;

	cout << "變數var的位址：" << &var
		<< endl;
	cout << "指標ptr指向的位址：" << ptr
		<< endl;

	return 0;
}