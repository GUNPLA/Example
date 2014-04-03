/*
 * Exs.cpp
 *
 *  Created on: 2014Äê3ÔÂ21ÈÕ
 *      Author: MAITO
 */

#include<iostream>
using namespace std;

int main() {
	int n;
	int jiecheng(int a);
	cin >> n;

	if (n < 0)
		cout << "No operation";
	else
		cout << n << "!=" << jiecheng(n) << endl;

	return 0;
}
int jiecheng(int a) {
	int b;
	a == 0 ? b = 1 : b = jiecheng(a - 1) * a;
	return b;
}
