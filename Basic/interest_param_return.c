#include <stdio.h>

float findInterest(float p, float r, int time){
	return p*time*r/100;
}

main(){
	float principal, rate, time, interest;
	printf("Enter Principal(Rupees)\n");
	scanf("%f", &principal);
	printf("Enter Rate(%%)\n");
	scanf("%f", &rate);
	printf("Enter Time(years)\n");
	scanf("%f", &time);	
	interest = findInterest(principal, rate, time);
	printf("The interest is: Rs.%.2f",interest );
}
