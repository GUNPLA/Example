/*
 * Exs.cpp
 *
 *  Created on: 2014��3��21��
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
	cout << "Բ�ܳ�Ϊ" << x1 << endl;
	cout << "Բ���Ϊ" << x2 << endl;
	cout << "Բ������Ϊ" << x3 << endl;
	cout << "Բ�����Ϊ" << x4 << endl;
	cout << "Բ�����Ϊ" << x5 << endl;
	return 0;
}

