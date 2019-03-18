#include <stdio.h>

main(){
	FILE * f ;
	int i, n ;
	f = fopen("numbers.txt", "w+") ;
	for( i = 1 ; i <= 20 ; i++ ){
		fprintf(f, "%d ", i);
	}
	printf("\n Written to file.");
	printf("\n Reading from file.");
	rewind( f );
	for( i = 1 ; i <= 20 ; i++ ){
		fscanf(f, "%d ", &n );
		printf("%d, ", 2 * n );
	}
	fclose( f );
}
