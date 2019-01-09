#include <stdio.h>

float findInterest(){
	float principal, rate, time, interest;
	printf("Enter Principal(Rupees)\n");
	scanf("%f", &principal);
	printf("Enter Rate(%%)\n");
	scanf("%f", &rate);
	printf("Enter Time(years)\n");
	scanf("%f", &time);		
	printf("The interest is: Rs.%.2f",principal*time*rate/100 );
}

main(){

	findInterest();
	
}
