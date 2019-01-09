#include <stdio.h>

int factorial( int number){
//	if( number == 0 || number == 1){
//		return 1 ;
//	}else{
//		return number * factorial(number - 1);
//	}
	int fac = 1, i;
	for( i = 1; i<= number; i++){
		fac *= i ;
	}
	return fac ;
}

main(){
	int n;
	printf("Enter a number:");
	scanf("%d", &n);
	printf("The factorial is: %d", factorial(n));
}
