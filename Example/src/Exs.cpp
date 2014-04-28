/*
 * Exs.cpp
 *
 *  Created on: 2014Äê4ÔÂ5ÈÕ
 *      Author: MAITO
 */

#include<iostream>
#include<cstring>

using namespace std;

int main() {
	void max_string(char str[][30], int i);
	int i;
	char country_name[3][30];
	for (i = 0; i < 3; i++) {
		cin >> country_name[i];
	}
	max_string(country_name, 3);
	return 0;
}
void max_string(char str[][30], int n) {
	int i;
	char string[30];
	strcpy(string, str[0]);
	for (i = 1; i < n; i++)
		if (strcmp(str[i], string) > 0)
			strcpy(string, str[i]);
	cout << endl << "the largest string is:" << string << endl;
}
