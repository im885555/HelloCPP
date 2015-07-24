#include <iostream> 
#include <string>
using namespace std;

class ReturnBy{
public:
	ReturnBy();

private:
	int* createArray(int);
	void deleteArray(int*);
	
	string& foo();
};