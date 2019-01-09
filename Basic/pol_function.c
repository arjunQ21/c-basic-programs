#include <stdio.h>
#include <math.h>

float polFun(float x){
	return ( 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - x *x + 7*x -6 );
}

main(){
	float x;
	printf("Enter the value of x:");
	scanf("%f", &x);
	printf("The value of given expression with x = %.2f is: %.2f", x, polFun(x));
}
