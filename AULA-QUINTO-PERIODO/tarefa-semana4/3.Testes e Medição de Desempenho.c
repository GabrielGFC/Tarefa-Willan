#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
	long long comps;
	long long swaps;
} Metrics;

static inline void metrics_reset(Metrics *m) {
	m->comps = 0;
	m->swaps = 0;
}

void printArray(const int *arr, int n) {
	printf("[");
	for (int i = 0; i < n; i++) {
		printf("%d", arr[i]);
		if (i + 1 < n) printf(", ");
	}
	printf("]\n");
}

static inline void swap(int *a, int *b, Metrics *m) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
	if (m) m->swaps++;
}

static inline double elapsed_seconds(clock_t t0, clock_t t1) {
	return (double)(t1 - t0) / CLOCKS_PER_SEC;
}

static int* dup_array(const int *src, int n) {
	int *dst = (int*)malloc(n * sizeof(int));
	memcpy(dst, src, n * sizeof(int));
	return dst;
}

void insertionSort(int *arr, int n, Metrics *m) {
	for (int i = 1; i < n; i++) {
		int key = arr[i];
		int j = i - 1;
		while (j >= 0) {
			if (m) m->comps++;
			if (arr[j] > key) {
				arr[j + 1] = arr[j];
				if (m) m->swaps++;
				j--;
			} else break;
		}
		arr[j + 1] = key;
	}
}

int partition(int *arr, int low, int high, Metrics *m) {
	int pivot = arr[high];
	int i = low - 1;
	for (int j = low; j < high; j++) {
		if (m) m->comps++;
		if (arr[j] <= pivot) {
			i++;
			if (i != j) swap(&arr[i], &arr[j], m);
		}
	}
	if (i + 1 != high) swap(&arr[i + 1], &arr[high], m);
	return i + 1;
}
void quickSortRec(int *arr, int low, int high, Metrics *m) {
	if (low < high) {
		int p = partition(arr, low, high, m);
		quickSortRec(arr, low, p - 1, m);
		quickSortRec(arr, p + 1, high, m);
	}
}
void quickSort(int *arr, int n, Metrics *m) {
	if (n > 1) quickSortRec(arr, 0, n - 1, m);
}

void fill_sorted(int *arr, int n)   {
	for (int i = 0; i < n; i++) arr[i] = i;
}
void fill_reverse(int *arr, int n)  {
	for (int i = 0; i < n; i++) arr[i] = n - 1 - i;
}
void fill_random(int *arr, int n)   {
	for (int i = 0; i < n; i++) arr[i] = rand();
}

void benchmark_one(const char *cenario, const int *base, int n) {
	int *a1 = dup_array(base, n);
	int *a2 = dup_array(base, n);

	Metrics mi, mq;
	metrics_reset(&mi);
	metrics_reset(&mq);

	clock_t t0, t1;

	t0 = clock();
	insertionSort(a1, n, &mi);
	t1 = clock();
	double tinsertion = elapsed_seconds(t0, t1);

	t0 = clock();
	quickSort(a2, n, &mq);
	t1 = clock();
	double tquick = elapsed_seconds(t0, t1);

	printf("CenC!rio: %-9s | n=%7d\n", cenario, n);
	printf("  InsertionSort: tempo = %8.6fs | comps = %12lld | trocas = %12lld\n",
	       tinsertion, mi.comps, mi.swaps);
	printf("  QuickSort    : tempo = %8.6fs | comps = %12lld | trocas = %12lld\n\n",
	       tquick, mq.comps, mq.swaps);

	free(a1);
	free(a2);
}

int main(void) {
	setbuf(stdout, NULL);
	srand((unsigned)time(NULL));

	int sizes[] = {20, 2000, 10000};
	int num_sizes = (int)(sizeof(sizes)/sizeof(sizes[0]));

	for (int s = 0; s < num_sizes; s++) {
		int n = sizes[s];
		int *base = (int*)malloc(n * sizeof(int));

		fill_sorted(base, n);
		benchmark_one("ordenado", base, n);

		fill_reverse(base, n);
		benchmark_one("reverso", base, n);

		fill_random(base, n);
		benchmark_one("aleatorio", base, n);

		free(base);
	}

	return 0;
}
