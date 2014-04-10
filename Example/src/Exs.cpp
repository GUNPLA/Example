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
	int a, b, c, w;
	void aa(int x, int y, int z);
	void bb(int x, int y, int z);
	void cc(int x, int y, int z);
	cin >> a >> b >> c;
	w = b * b - 4 * a * c;
	if (a > 0)
		if (w < 0)
			aa(a, b, c);
		else if (w == 0)
			bb(a, b, c);
		else
			cc(a, b, c);
	else
		cout << "Not a Quadratic Equation" << endl;
	return 0;
}
void aa(int x, int y, int z) {
	cout << "have no root" << endl;
}
void bb(int x, int y, int z) {
	cout << "x=" << (-y / 2 / x) << endl;
}
void cc(int x, int y, int z) {
	cout << "x1=" << ((-y - sqrt(y * y - 4 * x * z)) / (2 * x)) << ',' << "x2="
			<< ((-y + sqrt(y * y - 4 * x * z)) / (2 * x)) << endl;
}
