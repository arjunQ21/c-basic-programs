#include <stdio.h>

main(){
	int total = 1, i, j;
	for(i = 1; i<= 5; i++){
		for(j=0; j< i; j++){
			printf("%d\t", total);
			total ++;
		}
		printf("\n");
	}
}
