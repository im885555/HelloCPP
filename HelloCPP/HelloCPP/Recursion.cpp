#include <iostream> 
#include "Recursion.h"
using namespace std;

Recursion::Recursion() {
	int m = 0;
	int n = 0;

	cout << "¿é¤J¨â¼Æ¡G";
	cin >> m >> n;

	cout << "GCD: "
		<< gcd(m, n) << endl;

	
}

int Recursion::gcd(int m, int n) {
	if (n == 0)
		return m;
	else
		return gcd(n, m % n);
}

