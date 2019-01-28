#include <stdio.h>
#include <string.h>
void remove_2( char character, char *from ){
	int i, j;
	int lastAdded = 0 ;
	for( i = 0 ; i < strlen(from); i++){
		if( from[i] == character){
			continue ;
		}else{
			*( from + lastAdded ) = from[i] ;
			lastAdded ++ ;
		}
	}
	*(from + lastAdded) = '\0';
	
}

main(){
	char toRemove ;
	char str[90] ;
	printf("Enter a string\t");
//	str = gets() ;
	gets(str);
	printf("Which char do u want to remove?\t");
	scanf("%c", &toRemove) ;
	remove_2(toRemove, str) ;
	printf("%s", str);
	
	
	
}
