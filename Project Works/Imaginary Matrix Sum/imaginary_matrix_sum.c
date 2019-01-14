#include <stdio.h>
#include <math.h>
#include <string.h>



//Function prototyping

void toString(int real, int imag);
void readMatrix(int matrixNumber);
void showMatrix( int matrixNumber, char name[]);
void addMatrices();


//Global Variables
int real[3][3][3], imag[3][3][3];
char currentString[60] ;


main(){
	printf("Hi, this program helps to find sum of matrices whose elements are imaginary.\n\n");
	readMatrix(1);
	showMatrix(1,"First Matrix");
	readMatrix(2);
	showMatrix(2,"Second Matrix");	
	addMatrices();
	printf("The input was:\n");
	showMatrix(1,"first matrix");
	showMatrix(2,"second matrix");	
	printf("The sum is:\n");
	showMatrix(3,"Sum Matrix");
	getch();
//	getch();
}


//Function Definitions
void readMatrix(int matrixNumber){
	int i, j, index = matrixNumber - 1;
	printf("Enter Elements of Matrix %d\n", matrixNumber);
	for( i = 0; i < 3; i++ ){
		for( j = 0; j< 3; j++){
			printf("Real[%d][%d]\t:", i+1, j+1);
			scanf("%d", &real[index][i][j]);
			printf("Imaginary[%d][%d]\t:", i+1, j+1);
			scanf("%d", &imag[index][i][j]);			
		}
	}
}


void showMatrix( int matrixNumber, char name[]){
	extern int real[3][3][3], imag[3][3][3];
	int i, j, index = matrixNumber - 1;
	printf("%s :\n", name);
	for( i = 0; i < 3; i++ ){
		printf("\t");
		for( j = 0; j< 3; j++){
			if(j == 0){
				printf("|");
			}
			toString(real[index][i][j], imag[index][i][j]);
			printf("%10s ", currentString);
			if(j == 2){
				printf("|");
			}			
		}
		printf("\n");
	}	
	printf("\n");	
}

void toString(int real, int imag){
	char sign = '+';
	if( imag < 0){
		sign = '-';
	}
	sprintf(currentString, "%d %c %di", real, sign, abs(imag));
}

void addMatrices(){
	int mat, row, col;
	for(mat = 0; mat < 2; mat++){
		for(row = 0; row < 3; row ++){
			for( col = 0; col < 3; col ++){
				real[2][row][col] += real[mat][row][col];
				imag[2][row][col] += imag[mat][row][col];
			}
		}
	}
}
