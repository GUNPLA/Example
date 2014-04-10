/*
 * Exs.cpp
 *
 *  Created on: 2014Äê4ÔÂ5ÈÕ
 *      Author: MAITO
 */

#include<iostream>

using namespace std;

int main() {
	int a, b, c, x;
	int fac(int n);
	cin >> a >> b >> c;
	x = fac(a) + fac(b) + fac(c);
	cout << a << "!+" << b << "!+" << c << "!=" << x << endl;
	return 0;
}
int fac(int n) {
	int i, j;
	if (n == 0)
		return 1;
	else {
		for (i = 1, j = 1; i <= n; i++)
			j = i * j;
		return j;
	}
}
