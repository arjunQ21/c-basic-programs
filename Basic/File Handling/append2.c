#include <stdio.h>
#include <string.h>
#include <conio.h>

main(){
	FILE * fptr ;
	printf("Enter fileName: ");
	char fileName[70] ;
	scanf("%s", fileName );
	fptr = fopen(fileName, "w");
	printf("Enter text you want to write for the first line of file: \n\n");
	getchar() ;
	char entered ;
//	getch();
	while( (entered = getchar()) != '\n' ){
//		scanf("%c", &entered);
//		entered = getchar() ;
//		if( entered == '\n') break ;
		fputc(entered, fptr);
	}
	fclose(fptr);
//	printf("\n Input: \n %s", write);
}
