/*
 * Exs.cpp
 *
 *  Created on: 2014Äê3ÔÂ21ÈÕ
 *      Author: MAITO
 */

#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int i, n;
	char x[6];

	for (i = 0; i < 6; i++) {

		if ((x[i] = getchar()) == '\n')
			break;
	}
	if (i == 6 || i == 0)
		cout << "error";
	else {
		cout << "i=" << i << endl;
		for (n = 0; n < i; n++)
			cout << x[n] << endl;
		for (n = i - 1; n >= 0; n--)
			cout << x[n];
	}

	return 0;
}
