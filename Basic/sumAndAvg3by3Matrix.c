#include <stdio.h>

main(){
	int mat[3][3], row, col, sum = 0;
	float avg = 0.0;
	printf("Enter the elements of 3*3 matrix:\n");
	for(row = 0; row < 3; row++){
		for(col = 0 ; col< 3; col++){
			printf("Enter the element in position (%d, %d):\t", row+1, col+1);
			scanf("%d",&mat[row][col]);
			sum += mat[row][col];
		}
	}
	avg = sum / 9 ;
	printf("\nThe Sum of elements in the matrix is: %d\n", sum);
	printf("The Average of elements in the matrix is: %.2f", avg );
	getch();
}
