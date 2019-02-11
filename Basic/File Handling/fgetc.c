#include <stdio.h>

main(){
	FILE * file ;
	char c ;
	file = fopen("arjun.txt", "r");
	while((c = fgetc(file)) != EOF ){
		printf("%c", c);
	}
}
