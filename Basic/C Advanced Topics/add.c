#include <stdio.h>

main( int argc, char * argv[]){
	int sum = 0, i ;
	if( argc > 0 && argv[1] != NULL){
		printf("Sum is : ");
		for( i = 1 ; i < argc; i++){
			sum += atoi( argv[i] );
		}
		printf("%d.", sum);
	}else{
		printf("No args.");
	}
}
