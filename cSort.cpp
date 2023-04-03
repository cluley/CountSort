#include "cSort.h"

void count_sort(int* arr, int size) {
	const int start = 10;
	const int end = 25;

	int temp[end] = {};
	for (int i = 0; i < size; i++) {
		temp[arr[i]]++;
	 }

	for (int i = 0; i < size; i++) {
		int cntr = start;
		while (temp[cntr] == 0) cntr++;
		arr[i] = cntr;
		temp[cntr]--;
	}
}