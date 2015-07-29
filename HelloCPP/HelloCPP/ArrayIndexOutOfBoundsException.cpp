#include "ArrayIndexOutOfBoundsException.h"
#include <string>
#include <sstream>
using namespace std;

ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(int index) {
	string str1;
	stringstream sstr;
	sstr << index;
	sstr >> str1;
	string str2("ArrayIndexOutOfBoundsException:");
	str2.append(str1);
	_message = str2.c_str();
}