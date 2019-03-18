#include <stdio.h>
#include <stdlib.h>
main(){
	int * ptr;
	int i, j, n, temp ;
	printf("How many Numbers are there? ");
	scanf("%d", &n);
	//DMA
	ptr = (int *) calloc( n, sizeof(int));
	//Input
	for( i = 0 ; i < n ; i++){
		printf("\nEnter Number %d: ", i+1);
		scanf("%d", ptr + i );
	}
	//Sorting
	for( i = 0 ; i < n ; i++){
		for ( j = i + 1 ; j < n ; j++){
			if( *(ptr + i) > *( ptr + j) ){
				temp = *( ptr + i );
				*( ptr + i ) = *( ptr + j );
				*( ptr + j ) = temp ; 
			}
		}
	}
	//Displaying
	printf("\n Sorted Numbers: ");
	for( i = 0 ; i < n ; i++ ){
		printf("\n%10d", *(ptr + i));
	}
	//Freeing Memory
	free( ptr );
	
}
