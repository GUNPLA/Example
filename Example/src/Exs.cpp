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
	for (int i = 2; i <= 100; i++) {
		int j;
		for (j = 2; j <= sqrt(i); j++)
			if (i % j == 0) {
				break;
			}
		if (j > sqrt(i))
			cout << i << endl;
	}
	return 0;
}
