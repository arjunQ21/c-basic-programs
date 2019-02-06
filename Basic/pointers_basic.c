#include <stdio.h>
#include <stdlib.h>

main(){
	int *p ;
	int i, j;
	p = (int *) calloc(5, sizeof(int));
	for( i = 0; i< 5; i++){
		*(p + i) = 5 ;
	}
	printf("\n Previous values :\n");
	for( i = 0; i< 5; i++){
		printf("%d ",*(p + i)) ;
	}	
//	printf("Size of p: = %d\n",sizeof(p));
	p = (int *) realloc(p, sizeof(int) * 2);
	printf("\n After realloc values :\n");
	for( i = 0; i< 5; i++){
		printf("%d ",*(p + i)) ;
	}	
//	printf("Size of p: = %d\n",sizeof(p));
}
