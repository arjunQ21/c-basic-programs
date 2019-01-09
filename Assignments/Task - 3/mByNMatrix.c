#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void main(){
	int row, col, rows, cols, mat[MAX_ROWS][MAX_COLS];
//	Asking for no. of rows and columns	
	while( 1 ){
		printf("Enter the no. of rows in matrix (max %d):\n", MAX_ROWS);
		scanf("%d", &rows);
		if(rows > MAX_ROWS){
			printf("Maximum allowed rows is %d :(\n\n\tPlease Start Again\n\n", MAX_ROWS);
			continue ;
		}
		printf("Enter the no. of columns in matrix (max %d):\n", MAX_COLS);
		scanf("%d", &cols);	
		if(cols > MAX_COLS){
			printf("Maximum allowed columns is %d :(\n\n\tPlease Start Again\n\n", MAX_COLS);
			continue ;
		}
		printf("You chose a %d-by-%d matrix.\n", rows, cols);
		break ;
	}
//	printf("Loop seems to work fine.");
//	TAKING INPUT
	for(row = 0 ; row < rows; row++){
		for(col = 0 ; col < cols; col++){
			printf("Enter [%d][%d] element:\t", row + 1, col+1 );
			scanf("%d", &mat[row][col]);
		}
//		printf("\n");
	}
//	SHOWING INPUT MATRIX
	printf("The matrix you entered is as such:\n\n");
	for(row = 0 ; row < rows; row++){
		printf("\t");
		for(col = 0 ; col < cols; col++){
			printf("%d\t", mat[row][col]);
		}
		printf("\n");
	}
	
//	Upper triangular matrix 
	if(rows != cols){
		printf("This matrix of order %d by %d is not a square matrix, Hence it cannot be converted into Triangular Matrix.\n", rows, cols);
	}else{
//  Converting into upper triangular matrix		
		for(row = 0 ; row < rows; row++){
			for(col = 0 ; col < cols; col++){
				if(row > col){
					mat[row][col] = 0 ;
				}
			}
		}	
	//	SHOWING UPPER TRIANGULAR MATRIX
		printf("\nThe UPPER TRIANGULAR MATRIX is as such:\n\n");
		for(row = 0 ; row < rows; row++){
			printf("\t");
			for(col = 0 ; col < cols; col++){
				printf("%d\t", mat[row][col]);
			}
			printf("\n");
		}			
	}		
	printf("\n\n\tBye :)");
	getch();
	
}
