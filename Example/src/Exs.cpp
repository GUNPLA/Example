/*
 * Exs.cpp
 *
 *  Created on: 2014Äê4ÔÂ5ÈÕ
 *      Author: MAITO
 */

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int a, b, c, d;
	int GCD(int x, int y);
	int LCM(int x, int y);

	cin >> a >> b;
	c = GCD(a, b);
	d = LCM(a, b);

	cout << "GCD=" << c << ',' << "LCM=" << d << endl;

	return 0;
}

int GCD(int x, int y) {
	int m, n;
	m = fmax(x, y);
	n = fmin(x, y);
	do {
		x = n;
		n = m % n;
		m = x;
	} while (n != 0);
	return m;
}

int LCM(int x, int y) {
	return (fabs(x * y) / GCD(x, y));
}
