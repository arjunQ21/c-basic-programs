#include <stdio.h>

void char_replace( char * p, char search){
	char * temp ;
	while( *p != '\0'){
		if( *p == search ){
			temp = p ;
			while( *temp != '\0'){
				*temp = *(temp + 1) ;
				temp ++ ;
			}
			p -- ;
		}
		p ++ ;
	}
}

main(){
	char name[20], rep ;
	printf("Enter a String: ");
//	scanf("%s", name );
	gets( name );
	printf("Enter what you want to remove from this String: ");
	scanf("%c", &rep );
	char_replace(name, rep);
	printf("Final String: %s", name );
}
