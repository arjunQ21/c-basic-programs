#include <stdio.h>

void main(){
	printf("Enter a 3-by-3 matrix:\n");
	int row, col, mat[3][3];
	//TAKING INPUT
	for(row = 0 ; row < 3; row++){
		for(col = 0 ; col< 3; col++){
			printf("Enter [%d][%d] element:\n", row + 1, col+1 );
			scanf("%d", &mat[row][col]);
		}
		printf("\n");
	}
	//CALCULATING SUM OF EVEN NUMBERS
	int sum = 0 ;
	for(row = 0; row < 3; row ++){
		for(col = 0 ; col< 3 ;col++){
			sum += ((mat[row][col] % 2) == 0) ? mat[row][col] : 0 ;
		}
	}
	//	SHOWING SUM
	printf("The sum of even numbers in the above matrix is: %d\n", sum);
	getch();
	
}
