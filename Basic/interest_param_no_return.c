#include <stdio.h>

float findInterest(float p, float r, int time){
	printf("The interest is: Rs.%.2f",p*time*r/100 );
}

main(){
	float principal, rate, time, interest;
	printf("Enter Principal(Rupees)\n");
	scanf("%f", &principal);
	printf("Enter Rate(%%)\n");
	scanf("%f", &rate);
	printf("Enter Time(years)\n");
	scanf("%f", &time);	
	findInterest(principal, rate, time);
}
