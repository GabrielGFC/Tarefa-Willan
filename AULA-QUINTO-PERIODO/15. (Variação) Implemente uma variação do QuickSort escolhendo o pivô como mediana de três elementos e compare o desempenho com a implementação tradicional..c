#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partitionTraditional(int arr[], int low, int high) {
	int pivot = arr[low];
	int left = low + 1;
	int right = high;

	while (1) {
		while (left <= right && arr[left] <= pivot) left++;
		while (arr[right] > pivot) right--;
		if (left > right) break;
		swap(&arr[left], &arr[right]);
	}
	swap(&arr[low], &arr[right]);
	return right;
}

void quickSortTraditional(int arr[], int low, int high) {
	if (low < high) {
		int p = partitionTraditional(arr, low, high);
		quickSortTraditional(arr, low, p - 1);
		quickSortTraditional(arr, p + 1, high);
	}
}


int medianOfThree(int arr[], int low, int mid, int high) {
	if ((arr[low] > arr[mid]) != (arr[low] > arr[high]))
		return low;
	else if ((arr[mid] > arr[low]) != (arr[mid] > arr[high]))
		return mid;
	else
		return high;
}

int partitionMedianOfThree(int arr[], int low, int high) {
	int mid = low + (high - low) / 2;
	int medianIndex = medianOfThree(arr, low, mid, high);
	swap(&arr[low], &arr[medianIndex]);
	int pivot = arr[low];
	int left = low + 1;
	int right = high;

	while (1) {
		while (left <= right && arr[left] <= pivot) left++;
		while (arr[right] > pivot) right--;
		if (left > right) break;
		swap(&arr[left], &arr[right]);
	}
	swap(&arr[low], &arr[right]);
	return right;
}

void quickSortMedianOfThree(int arr[], int low, int high) {
	if (low < high) {
		int p = partitionMedianOfThree(arr, low, high);
		quickSortMedianOfThree(arr, low, p - 1);
		quickSortMedianOfThree(arr, p + 1, high);
	}
}

void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main() {
	int n = 10000;
	int *arr1 = malloc(n * sizeof(int));
	int *arr2 = malloc(n * sizeof(int));

	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		int val = rand() % 100000;
		arr1[i] = val;
		arr2[i] = val;
	}

	clock_t start, end;
	double timeTraditional, timeMedian;

	start = clock();
	quickSortTraditional(arr1, 0, n - 1);
	end = clock();
	timeTraditional = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;

	start = clock();
	quickSortMedianOfThree(arr2, 0, n - 1);
	end = clock();
	timeMedian = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;

	printf("Tempo QuickSort tradicional: %.3f ms\n", timeTraditional);
	printf("Tempo QuickSort mediana de trC*s: %.3f ms\n", timeMedian);


	free(arr1);
	free(arr2);
	return 0;
}
