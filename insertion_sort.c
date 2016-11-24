#include <stdio.h>

/*
 * Function Declaration
 */
void insert(int[], int, int);

/*
 * Insertion Sort
 */
void sort(int A[], int len) {
	int i;
	for(i = 1; i < len; i++) {
		insert(A, i, A[i]);
	}	
}

/*
 * Core code of Insertion-Sort
 */
void insert(int A[], int pos, int value) {
	int i = pos - 1;
	while(i >= 0 && A[i] > value) {
		A[i+1] = A[i];
		i--;
	}

	A[i+1] = value;
}

int main() {
	int i;
	int A[10] = {5, 8, 3, 6, 1, 2, 7, 0, 9, 4};
	sort(A, 10);

	// print the sorted data
	for(i = 0; i < 10; i++) {
		printf("%d\t", A[i]);
	}

	printf("\n");

	return 0;
}