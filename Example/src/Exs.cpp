/*
 * Exs.cpp
 *
 *  Created on: 2014Äê4ÔÂ5ÈÕ
 *      Author: MAITO
 */

#include<iostream>

using namespace std;

int main() {
	void select_sort(int array[], int n);
	int a[10], i;
	cout << "enter the original array:" << endl;
	for (i = 0; i < 10; i++)
		cin >> a[i];
	cout << endl;
	select_sort(a, 10);
	cout << "the sorted array:" << endl;
	for (i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}
void select_sort(int array[], int n) {
	int min, position;
	for (int i = 0; i < n - 1; i++) {
		min = array[i];
		position = i;
		for (int j = i + 1; j < n; j++) {
			if (min > array[j]) {
				min = array[j];
				position = j;
			}
		}
		array[position] = array[i];
		array[i] = min;
	}
}
