#include <iostream> 


using namespace std;


class DemoTemplate {
	public:
		DemoTemplate();
		int FunctionTemplate();
		int ClassTemplate();
	private:
		template <class X>
		void bubbleSort(X[], int);
};


template <class T>
//Printer.h
class Printer {
	T _t;
public:
	Printer(T t);
	void print();

};