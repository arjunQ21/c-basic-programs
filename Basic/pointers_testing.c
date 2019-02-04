#include <stdio.h>



main(){
	int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i, j ;
	printf("addresses:\n");
	for( i =0; i< 3; i++){
		for( j=0; j< 3; j++){
			printf("[%d][%d] = %d => %d\n", i, j, mat[i][j], &mat[i][j]);
		}
	}
	printf("%d", *(*(mat + 2) -1 ));
}
