#ifndef ABSTRACTCIRCLE
#define ABSTRACTCIRCLE

class AbstractCircle {
public:
	void radius(double radius) {
		_radius = radius;
	}
	double radius() {
		return _radius;
	}
	// 宣告虛擬函式
	virtual void render() = 0;

protected:
	double _radius;
};

#endif