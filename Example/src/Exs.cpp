/*
 * Exs.cpp
 *
 *  Created on: 2014Äê4ÔÂ5ÈÕ
 *      Author: MAITO
 */

#include<iostream>
#include<stdio.h>

#define CHANGE 0

using namespace std;

int main() {
	char c;

	while ((c = getchar()) != '\n') {
#if CHANGE==1
		if (c >= 'a' && c < 'z') {
			c += 1;
		} else if (c == 'z') {
			c -= 25;
		}
#endif
		cout << c;
	}
	return 0;
}
