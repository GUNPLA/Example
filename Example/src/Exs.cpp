/*
 * Exs.cpp
 *
 *  Created on: 2014Äê4ÔÂ5ÈÕ
 *      Author: MAITO
 */

#include<iostream>

using namespace std;
int main() {
	int a[10];
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++) {
		int j = i, k;
		for (int n = i + 1; n < 10; n++) {
			if (a[j] > a[n])
				j = n;
		}
		k = a[i];
		a[i] = a[j];
		a[j] = k;
	}

	for (int i = 0; i < 10; i++) {
		cout << a[i] << ' ';
	}
	return 0;
}
