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
	int i, n;
	for (n = 100; n <= 200; n++) {
		for (i = 2; i < (int) sqrt(n); i++) {
			if (n % i == 0)
				break;
		}
		if (i == (int) sqrt(n))
			cout << n << endl;

	}
	return 0;
}


