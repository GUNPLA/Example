/*
 * Exs.cpp
 *
 *  Created on: 2014Äê3ÔÂ21ÈÕ
 *      Author: MAITO
 */

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int m, n, i, j;

	cin >> m >> n;
	if (m <= 0 || n <= 0) {
		cout << "Error" << endl;
	} else {

		i = m + n;
		j = m * n;
		m = (m >= n) ? m : n;
		n = i - m;

		for (; n != 0;) {
			i = n;
			n = m % n;
			m = i;
		}

		cout << "GCD=" << m << endl;
		cout << "LCM=" << (abs(j) / m) << endl;
	}
}
