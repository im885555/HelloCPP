#include <iostream> 
#include "AbstractCircle.h"
using namespace std;

class ConcreteCircle : public AbstractCircle {
public:
	void render() {
		cout << "畫一個半徑 "
			<< _radius
			<< " 的實心圓"
			<< endl;
	}
};