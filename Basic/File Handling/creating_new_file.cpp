#include <stdio.h>
#include <conio.h>
#include <string.h>

main(){
	FILE * f ;
	int i ;
	char c, fileName[30], s[200] ;
//	printf("%c", EOF );
	printf("Enter the name of the file: ");
	scanf("%s", fileName );
	printf("Enter some text to write to the file '%s': ", fileName );
	f = fopen(fileName, "r+" );
	if( f == NULL ){
		printf("\nSome Error occurred opening the file. ");
	}else{
//		printf("\nStart Writing: ");
//		getchar() ;
//		while( strlen(gets(s)) != 0 ){
//			fputs(s, f);
//			fputs("\n", f);
//		}
//		printf("\n Written to file.");
//		rewind(f);
		printf("\nDisplaying content from file: ");
		printf("\n---------------------------------");
//		while( ( c = fgetc(f)) != EOF ){
////			printf("%c", c);
////			putchar( c );
//		}
		while( strlen(fgets(s, 10, f)) > 0 ){
			printf("%s", s);
		} 
		printf("\n---------------------------------");
	}
}
