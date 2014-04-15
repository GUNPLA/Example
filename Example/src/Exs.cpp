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

	for (int i = 9; i > 0; i--) {
		for (int j = 0; j < i; j++)
			if (a[j] > a[j + 1]) {
				a[j + 1] = a[j] + a[j + 1];
				a[j] = a[j + 1] - a[j];
				a[j + 1] = a[j + 1] - a[j];
			}
	}
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
	return 0;
}
