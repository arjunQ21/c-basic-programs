#include <stdio.h>
#include <stdlib.h>

void display(int *, int);

main(){
	int n, i, largest, smallest ;
	int *numbers ;
	printf("Enter the no. of elements: ");
	scanf("%d", &n) ;
	numbers = (int *) calloc(n, sizeof(int));
	printf("Enter: ");
	for( i = 0 ; i < n ; i++){
		printf("\nNumber %d: ", i+1);
		scanf("%d", numbers + i ) ;
	}
	printf("\nInput Numbers:\n");
	display( numbers, n);
	largest = *numbers ;
	smallest = *numbers ;
	for( i = 0 ; i< n ; i++){
		if( *(numbers + i) > largest){
			largest = *(numbers + i);
		}
		if( *(numbers + i) < smallest){
			smallest = *(numbers + i);
		}
	}
	printf("\nLargest: %d, Smallest: %d", largest, smallest) ;
	
}
void display(int *p, int size){
	int i ;
	for( i = 0 ; i < size; i++){
		printf("%d  ", *(p + i));
	}
}

