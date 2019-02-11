#include <stdio.h>

main(){
	FILE * fptr ;
	char entered ;
	int i ;
	printf("Enter the first line of the file: ");
	fptr = fopen("arjun.txt", "w");
	while(entered != '\n'){
		scanf("%c", &entered);
		fputc(entered, fptr );
	}
	printf("\n Seems fine.");
	fclose(fptr);
}
