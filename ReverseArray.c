//Reverse an array
#include <stdio.h>

#define SIZE 10

int main(void){
	
	int array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int reverseArray[SIZE];
	int i, j;
	
	//Change in remote repo.
	
	//Print array
//	puts("Array: ");
//	for(i = 0; i <= SIZE - 1; i++){
//		printf("%d ", array[i]);
//	}
	
	puts("Master change 1.");
	puts("MASTER CHANGE 2.");
	puts("MASTER CHANGE 3.");
	puts("MASTER CHANGE 4.");
	puts("MASTER CHANGE 5.");
	puts("MASTER CHANGE 6.");
	puts("MASTER CHANGE 7.");
	puts("MASTER CHANGE 8.");
	
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
