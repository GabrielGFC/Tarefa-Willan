/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void printArray(const int *arr, int n) {
	for (int i = 0; i < n; i++) {
		if (i) printf(" ");
		printf("%d", arr[i]);
	}
	printf("\n");
}

void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void insertionSort(int *arr, int n) {
	for (int i = 1; i < n; i++) {
		int key = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

int partition(int *arr, int low, int high) {
	int pivot = arr[high];
	int i = low - 1;

	for (int j = low; j < high; j++) {
		if (arr[j] <= pivot) {
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return i + 1;
}

void quickSortRec(int *arr, int low, int high) {
	if (low < high) {
		int p = partition(arr, low, high);
		quickSortRec(arr, low, p - 1);
		quickSortRec(arr, p + 1, high);
	}
}

void quickSort(int *arr, int n) {
	if (n > 1) quickSortRec(arr, 0, n - 1);
}

int main(void) {
	int a1[] = {5, 2, 9, 1, 5, 6};
	int n1 = sizeof(a1)/sizeof(a1[0]);
	insertionSort(a1, n1);
	printf("InsertionSort: ");
	printArray(a1, n1);

	int a2[] = {10, -3, 7, 4, 2, 9, 0};
	int n2 = sizeof(a2)/sizeof(a2[0]);
	quickSort(a2, n2);
	printf("QuickSort    : ");
	printArray(a2, n2);

	return 0;
}
