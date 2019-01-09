#include <stdio.h>

#define MAX_NUMBERS 50
#define MAX_INT_VALUE 2147483647
#define MIN_INT_VALUE -2147483647

main(){
	
	int max = MIN_INT_VALUE, min = MAX_INT_VALUE, numbers, arr[MAX_NUMBERS], i;
// taking input of total number of numbers	
	printf("How many numbers are there?(maximum: %d)\t", MAX_NUMBERS);
	while(1){
		scanf("%d", &numbers);	
		if(numbers > MAX_NUMBERS ){
			printf("Please enter some number below %d.\n", MAX_NUMBERS + 1);
			continue ;
		}
		break ;	
	}
//	printf("Input numbers was %d,", numbers);
//	taking input of numbers
	for(i = 0 ; i < numbers; i++){
		printf("Enter %d th number:\t", i+1);
		scanf("%d", &arr[i]);
	}
// 	finding maximum and minimun
	for(i =0 ; i< numbers; i++){
		if(arr[i] > max){
			max = arr[i];
		}
		if(arr[i] < min){
			min = arr[i];
		}
	}
//  Showing max and min
	printf("\nThe greatest number is %d\nAnd the samllest one is %d", max, min);
	getch();	
	
}
