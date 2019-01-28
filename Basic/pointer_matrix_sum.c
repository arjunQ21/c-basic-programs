#include <stdio.h>

#define SIZE 3

int add_matrix( int (*a)[3], int (*b)[3], int (*c)[3]) ;
read_matrix(int (*a)[3]) ;
show_matrix(int (*a)[3], char name[]);


main(){
	int mat1[SIZE][SIZE], mat2[SIZE][SIZE], sum[SIZE][SIZE] ;
	printf("Enter elements of matrix 1: \n");
	read_matrix(mat1);
	show_matrix(mat1, "Matrix 1");
	printf("Enter elements of matrix 2: \n");
	read_matrix(mat2);	
	show_matrix(mat2, "Matrix 2");
	add_matrix(mat1, mat2, sum);
	show_matrix(sum, "Sum");
	
}

int add_matrix( int (*a)[3], int (*b)[3], int (*c)[3]) {
	int i, j;
	for(i = 0; i< SIZE; i++){
		for(j =0; j< SIZE; j++){
			*(*(c + i) + j) = *(*(b + i) + j) + *(*(a + i) + j) ;
		}
	}
}

read_matrix(int (*a)[3]){
	int i, j;
	for(i = 0; i < SIZE; i++){
		for(j =0; j< SIZE; j++){
			printf("Enter element [%d][%d]: ", i+1, j+1);
			scanf("%d", *(a + i) +j );		
		}
	}
}

show_matrix(int (*a)[3], char name[]){
	printf("\nShowing Matrix: %s\n", name);
	int i , j ;
	for(i =0; i< SIZE; i++){
		printf("\t\t");
		for(j =0; j< SIZE; j++){
			printf("%9d", *(*( a + i ) + j ));
		}
		printf("\n");
	}
	printf("\n");
}
