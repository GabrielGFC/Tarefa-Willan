#include <stdio.h>

void bubbleSort(int v[], int n) {
	int i, j, tmp;
	for (i = 0; i < n-1; i++) {
		for (j = 0; j < n-1-i; j++) {
			if (v[j] > v[j+1]) {
				tmp = v[j];
				v[j] = v[j+1];
				v[j+1] = tmp;
			}
		}
	}
}

int main() {
	int arr[] = {4, 2, 2, 8, 3, 3, 1, 5};
	int n = sizeof(arr)/sizeof(arr[0]);

	int original[100];
	for (int i = 0; i < n; i++) {
		original[i] = arr[i];
	}

	bubbleSort(arr, n);

	printf("NC:mero | PosiC'C#o Inicial | PosiC'C#o Final\n");
	printf("-----------------------------------------\n");

	for (int i = 0; i < n; i++) {
		int num = original[i];

		int posIni = i;

		int posFim = -1;
		for (int j = 0; j < n; j++) {
			if (arr[j] == num) {
				posFim = j;
				break;
			}
		}

		printf("  %3d|%3d| %3d\n", num, posIni, posFim);
	}

	return 0;
}
