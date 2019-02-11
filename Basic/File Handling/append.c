#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
	FILE * f, *ap ;
	char c ;
	char fileName[50] ;
	printf("Enter fileName: ");
	scanf("%s",fileName);
	f = fopen(fileName, "r");
	if( f == NULL){
		printf("\n Error!!, file '%s' cannot be opened.", fileName);
		exit(1) ;
	}
	printf("\nContent in file '%s': \n", fileName);
	while((c = fgetc(f)) != EOF ){
		printf("%c", c);
	}
	fclose(f);
	
	ap = fopen(fileName, "a");
	if( ap == NULL){
		printf("\n Error!!, file '%s' cannot be opened.", fileName);
		exit(1) ;
	}	
	getch() ;
	printf("\nEnter new line to this file:\n");
	/*
	BUG: This part is never executed.
	*/
	while((c = getchar()) != '\n'){
		fputc(c, ap);
	}
	fclose(ap);
}
