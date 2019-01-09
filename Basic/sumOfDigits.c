#include <stdio.h>

void main(){

	int number, rem, sum = 0, init;
	printf("Enter number:\n");
	scanf("%d", &number);
	init = number ;
	while(number){
		rem = number % 10 ;
		sum += rem ; 	//sum = sum + rem ;
		number /= 10 ; 		//number = number / 10 ;
	}
	printf("The sum of digits in number %d is %d",init , sum);
	getch();
}


