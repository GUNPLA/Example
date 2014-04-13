/*
 * Exs.cpp
 *
 *  Created on: 2014Äê4ÔÂ5ÈÕ
 *      Author: MAITO
 */

#include<iostream>

using namespace std;

int a, m;

int main() {
	int b, x;
	double y;

	extern double power();
	b = 4;
	cin >> a >> m;
	x = a * b;
	y = power();

	cout << x << ',' << y << endl;

	return 0;
}
