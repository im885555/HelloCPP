#include <iostream> 
#include "AbstractCircle.h"
using namespace std;

class HollowCircle : public AbstractCircle {
public:
	void render() {
		cout << "畫一個半徑 "
			<< _radius
			<< " 的空心圓"
			<< endl;
	}
};