class DemoClass {
public:
	DemoClass();
    int exec();
	int ConstructorDestructor();
    int friendFunctionClass();
	int ObjectPointer();
	int LocalClasses();
private :


};

class Ballfriend;

int compareFriend(Ballfriend&, Ballfriend&);

class Ballfriend {
public:
	Ballfriend(double, char*);

	double radius() {
		return _radius;
	}

	char* name() {
		return _name;
	}

	void radius(double radius) {
		_radius = radius;
	}

	void name(char *name) {
		_name = name;
	}

	// 宣告朋友函式 
	friend int compareFriend(Ballfriend&, Ballfriend&);

private:
	double _radius; // 半徑 
	char *_name; // 名稱 
};