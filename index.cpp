#include <iostream>
#include <stdlib.h>
#include <time.h> 


using namespace std;

int insertionSort(int A[], int number) {
	for(int j=1; j<number; j++) {
		int key = A[j];
		//Insert A[j] into the sorted sequence A[1..j-1]
		int i = j-1;
		while(i >= 0 && A[i] > key) {
			A[i+1] = A[i];
			i = i-1;
		}
		A[i+1] = key;
	}
}

void print( int A[], int number) {
	for(int i = 0; i < number; i++) {
		printf("%i ", A[i]);
	}
}

int main () {
	srand(time(NULL));
	int number;
	cout << "Inserte el numero de elementos:";
	cin >> number;
	int array[number];
	//Generate random numbers
	for(int i = 0; i < number; i++) {
		array[i] = rand() % 100 + 1;
	}
	printf("Antes: \n");
	print(array, number);
	insertionSort(array, number);
	printf("\nDespues: \n");
	print(array, number);
}
