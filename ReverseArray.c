//Reverse an array
#include <stdio.h>

#define SIZE 10

int main(void){
	
	int array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int reverseArray[SIZE];
	int i, j;
	
	//Print array
//	puts("Array: ");
//	for(i = 0; i <= SIZE - 1; i++){
//		printf("%d ", array[i]);
//	}
	
	puts("No need to print the original array.");
	puts("Array in reverse:");
	puts("Master change 1.");
	puts("MASTER CHANGE 2.");
	
	//Reverse the array
	for(i = SIZE-1, j = 0; i >= 0, j <= SIZE-1; i--, j++){		
		reverseArray[j] = array[i];
		
	}
	
	puts("\nReversed array: ");
	for(j = 0; j <= SIZE - 1; j++){
		printf("%d ", reverseArray[j]);
	}
	
	//Shift to left
	for (j = 0; j <= SIZE - 1; j++){
		reverseArray[j] = reverseArray[j + 1];
	}
	
	//Print shifted array
	puts("\nLeft-shifted array: ");
	for(j = 0; j <= SIZE - 1; j++){
		printf("%d ", reverseArray[j]);
	}
}
