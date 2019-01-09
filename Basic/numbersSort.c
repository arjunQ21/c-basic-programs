#include <stdio.h>
 
#define NUMBERS 10
 
main(){
	int arr[NUMBERS], i, j, temp;
	for(i = 0 ; i< NUMBERS; i++ ){
		printf("Enter Number %d:\t", i+1);
		scanf("%d", &arr[i]);
	}
	for( i = 0 ; i< NUMBERS; i ++){
		for( j = NUMBERS -1; j > i ; j--){
			if( arr[i] > arr[j]){
				temp = arr[j];
				arr[j] = arr[i] ;
				arr[i] = temp ; 				
			}
			

		}
	}
	
	printf("showing sorted list:\n\n");
	
	for(i = 0 ; i< NUMBERS; i++ ){
//	jdsusdfsi	printf("Enter Number: %d\t", i+1);
		printf("%d \n", arr[i]);
	}	
	
	
	
	
}
