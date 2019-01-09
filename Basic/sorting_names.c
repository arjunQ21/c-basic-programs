#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 30
#define MAX_CHARS_IN_NAME 20

main(){
	int n, i, j;
	char employee[MAX_EMPLOYEES][MAX_CHARS_IN_NAME];
	
// taking input of total number of employees	
	printf("How many employees are there?(maximum: %d)\t", MAX_EMPLOYEES);
	while(1){
		scanf("%d", &n);	
		if(n > MAX_EMPLOYEES ){
			printf("Please enter some number below %d.\n", MAX_EMPLOYEES + 1);
			continue ;
		}
		break ;	
	}
	printf("Better Enter Names in small letters.\n");
	for(i = 0; i < n; i++){
		printf("Enter the name of Employee Number %d:\t", i+1 );
		scanf("%s",&employee[i]);
	}	
	printf("Input Names are:\n");
	char lower[1][MAX_CHARS_IN_NAME] ;	
	for(i = 0; i< n; i++){
//		Changing all names to lowercase		
		strcpy(lower, strlwr(employee[i]));
		strcpy(employee[i], lower);
		printf("\t%d\t%s\n", i+1, employee[i]);
	}	
//	SORTING NAMES
	char temp[1][MAX_CHARS_IN_NAME] ;
	for( i = 0 ; i < n; i++){
		for(j = n-1 ; j > i; j-- ){
			if(strcmp( employee[i] , employee[j] ) > 0 ){
				//swap
//				printf("Changing position %d => %s with %d => %s\n",i, employee[i], j, employee[j]);
//				printf("%s comes before %s\n", employee[j], employee[i]);
				strcpy( temp , employee[i] );
				strcpy( employee[i] , employee[j] );
				strcpy( employee[j] , temp );
//				 = ;
//				employee[j] = temp ;
			}
		}
	}	
//	PRINTING NAMES
	printf("Sorted Names are:\n");
	for(i = 0; i< n; i++){
		printf("\t%d\t%s\n", i+1, employee[i]);
	}	
	
}
