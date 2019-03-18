#include <stdio.h>

#define p 2
#define q 3
#define r 3
#define s 3

main(){
	int m1[p][q], m2[r][s], product[p][s] ;
	int i, j, k, frow, fcol, psum;
	printf("Matrix multiplication of %dx%d and %dx%d Matrices", p, q, r, s);
	printf("\nEnter elements of first matrix:\n");
	for( i = 0 ; i< p; i++){
		for( j = 0; j < q; j++){
			printf("[%dx%d] = ", i, j);
			scanf("%d", &m1[i][j]);
		}
	}
	printf("\nEnter elements of second matrix:\n");
	for( i = 0 ; i< r; i++){
		for( j = 0; j < s; j++){
			printf("[%dx%d] = ", i, j);
			scanf("%d", &m2[i][j]);
		}
	}
	
	for( frow = 0; frow < p; frow++){
		for(fcol = 0; fcol < s ; fcol ++){
			psum = 0 ;
			for( i = 0; i< q; i++){
				psum += m1[frow][i] * m2[i][fcol] ;
			}
			product[frow][fcol] = psum ;
		}
	}
	printf("\n\nProduct Matrix:\n");
	for( i = 0 ; i< p; i++){
		for( j = 0; j < s; j++){
			printf("%10d", product[i][j]);
		}
		printf("\n");
	}		
	
}
