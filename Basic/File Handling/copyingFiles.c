#include <stdio.h>
#include <stdlib.h>

main(){
	FILE *sFile, *dFile;
	char c, sourceFile[50], destFile[50] ;
	printf("Enter name of source file: ");
	scanf("%s", sourceFile );
	sFile = fopen(sourceFile, "r");
	if( sFile == NULL){
		printf("Unable to open source file '%s'.", sourceFile);
		exit(1);
	}
	printf("Enter name of destination file: ");
	scanf("%s", destFile );
	dFile = fopen(destFile, "w");
	if(dFile == NULL){
		printf("Unable to open destination file '%s'.", destFile);
		exit(1);		
	}
	while((c = fgetc(sFile)) != EOF ){
		fputc(c, dFile);
	}
	printf("Copied '%s' to '%s'.", sourceFile, destFile);
	fclose(sFile);
	fclose(dFile);
}
