/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void bubbleSort(int arr[], int n) {
	int i, j, temp;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void selectionSort(int arr[], int n) {
	int i, j, minIdx, temp;
	for (i = 0; i < n - 1; i++) {
		minIdx = i;
		for (j = i + 1; j < n; j++) {
			if (arr[j] < arr[minIdx]) {
				minIdx = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[minIdx];
		arr[minIdx] = temp;
	}
}

void printArray(int arr[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void copyArray(int src[], int dest[], int n) {
	for (int i = 0; i < n; i++) {
		dest[i] = src[i];
	}
}

int main() {
	int original[] = {64, 25, 12, 22, 11};
	int n = sizeof(original) / sizeof(original[0]);

	int arr1[100], arr2[100];
	copyArray(original, arr1, n);
	copyArray(original, arr2, n);

	bubbleSort(arr1, n);
	printf("Ordenado com Bubble Sort:   ");
	printArray(arr1, n);

	selectionSort(arr2, n);
	printf("Ordenado com Selection Sort:");
	printArray(arr2, n);

	return 0;
}
