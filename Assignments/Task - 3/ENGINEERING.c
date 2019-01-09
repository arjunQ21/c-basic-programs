#include <stdio.h>
#include <string.h>
main(){
	char text[] = "ENGINEERING";
	int i, j;
	for(i = 0 ; i < strlen(text); i++){
		for(j = 0 ; j <= i; j++){
			printf("%c", text[j]);
		}
		printf("\n");
	}
//	printf("Length is %d", strlen(text));
	
}
