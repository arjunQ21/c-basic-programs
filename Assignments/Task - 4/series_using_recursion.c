#include <stdio.h>
#include <math.h>

#define UPTO 30

double series(float);
int fac(int);
main(){
	float n ;
	printf("Enter a number: ");
	scanf("%f", &n);
	printf("\n\nThe value of series upto index %d for x = %f is %f", UPTO, n, series(n));
}
int fac(a){
	if(a <= 1){
		return 1 ;
	}else{
		return a * fac(a - 1);
	}
}

double series(float x){
	static int sign = -1 ;
	static int index = -1 ;
	if(index == -1){
		printf("%10s%10s%30s\n", "SIGN", "INDEX", "VALUE");
	}
	double val = 0 ;
	if(sign == 1) sign = -1 ;
	else sign = 1 ;
	index += 2 ;
	printf("%10d%10d", sign, index);
	if(index >= UPTO){
		return 0 ;
	}else{
		val = (sign*pow(x, index))/fac(index);
		printf("%30f\n", val);
		return val + series(x);
	}
}
