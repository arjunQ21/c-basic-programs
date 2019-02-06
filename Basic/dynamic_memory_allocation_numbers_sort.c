#include <stdio.h>
#include <stdlib.h>

void sort( int *, int);
void display(int *, int);

main(){
	int n, i ;
	int *numbers ;
	printf("Enter the no. of elements: ");
	scanf("%d", &n) ;
	numbers = (int *) calloc(n, sizeof(int));
	printf("Enter: ");
	for( i = 0 ; i < n ; i++){
		printf("\nNumber %d: ", i+1);
		scanf("%d", numbers + i ) ;
	}
	printf("\nBefore Sorting:\n");
	display( numbers, n);
	sort(numbers, n);
	printf("\nAfter sorting:\n");
	display(numbers, n);
	
}
void display(int *p, int size){
	int i ;
	for( i = 0 ; i < size; i++){
		printf("%d  ", *(p + i));
	}
}
void sort( int *nums, int size){
	int i, j, temp;
	for( i = 0; i< size; i++){
		for( j = i+1; j < size; j++){
			if( *(nums + i) > *(nums + j) ){
				temp = *(nums + i );
				*(nums + i) = *(nums + j);
				*(nums + j) = temp ;
			}
		}
	}
}
