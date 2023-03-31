#include "cSort.h"

void count_sort(int* arr, int size) {
	int temp[25] = {};
	for (int i = 0; i < size; i++) {
		temp[arr[i]]++;
	 }

	for (int i = 0; i < size; i++) {
		int cntr = 10;
		while (temp[cntr] == 0) cntr++;
		arr[i] = cntr;
		temp[cntr]--;
	}
}