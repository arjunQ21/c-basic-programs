#include <stdio.h>
#include <math.h>

#define UPTO 30

float taylorSeries(float);
int fac(int);
float floatPower( float, int);
//abs(a)
main(){
	float x ;
	while(1){
		printf("\nEnter a number: ");
		scanf("%f", &x);
		x = x * 180 / 3.14 ;
		printf("\n the taylor series value of %f is %15f", x, taylorSeries(x));
//		printf("Float power of %f , 5", floatPower(x, 5));
	}
}

float taylorSeries(float x){
	int index = 1 ;
	int sign = 1 ;
	float res = 0.0 ;
	while( (pow(x, index) / fac(index) ) > 0.001){
		res += sign * pow(x, index) / fac(index) ;
		printf("res => %f\n", res);
		index += 2 ;
		sign *= -1 ;
	}
	return res ;

}

//pow()

float floatPower(float num, int power){
	int i;
	float p = 1.0 ;
	for( i = 1 ; i <= power; i++){
		p *= num ;
		printf("\nProduct: %f", p);
	}
	return p ;
}

int fac(a){
	if(a <= 1){
		return 1 ;
	}else{
		return a * fac(a - 1);
	}
}


