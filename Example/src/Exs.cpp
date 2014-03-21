/*
 * Exs.cpp
 *
 *  Created on: 2014年3月21日
 *      Author: MAITO
 */

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {
	float r, h, x1, x2, x3, x4, x5;
	const float pi = 3.14;
	cin >> r >> h;
	x1 = 2 * pi * r;
	x2 = pi * pow(r, 2);
	x3 = 4 * pi * pow(r, 2);
	x4 = 4 / 3 * pi * pow(r, 3);
	x5 = x2 * h;
	cout << setiosflags(ios::fixed) << setprecision(2);
	cout << "圆周长为" << x1 << endl;
	cout << "圆面积为" << x2 << endl;
	cout << "圆球表面积为" << x3 << endl;
	cout << "圆球体积为" << x4 << endl;
	cout << "圆柱体积为" << x5 << endl;
	return 0;
}

