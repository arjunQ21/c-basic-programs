#include <stdio.h>

main( int argc, char * argv[]){
	int i ;
	if( argc > 1 && argv[1] != NULL){
		printf("%d arguments found.", argc);
		for( i = 1 ; i < argc; i++){
			printf("\n Argument[%d]: %s", i, argv[i]) ;
		}
	}else{
		printf("No arguments.");
	}
}
