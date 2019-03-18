#include <stdio.h>

void convert( char * input, char * output) ;
	
main(){
	char inp[100], oup[100] ;
	printf("Enter a string:");
	scanf("%s", inp );
	convert( inp, oup );
	printf("Converted String: %s", oup);
}

void convert( char * input, char * output){
	int i, charVal ; 
	while( *(input + i) != '\0' ){
		charVal = *(input + i) ;
		if( charVal >= 97 && charVal <= 122){
			*(output + i) = charVal - 32 ;
		}else if(charVal >= 65 && charVal <= 90){
			*(output + i) = charVal + 32 ;
		}
		i ++ ;
	}
	*(output + i) = '\0' ;
}
