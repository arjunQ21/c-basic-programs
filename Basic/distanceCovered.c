#include <stdio.h>

void main(){

	float initVel, time, acceleration, distance ;
	char cont ;
	int repeat = 1 ;
	printf("This program helps to calculate distance\n covered by object moving with intial velocity (u), in time (t), having\n acceleration (a)\n");	
	while(repeat){
		printf("\n\nEnter initial velocity(m/s):\n");
		scanf("%f", &initVel);
		printf("Enter time taken(sec):\n");
		scanf("%f", &time);
		printf("Enter acceleration(m/s2):\n");
		scanf("%f", &acceleration);
		distance = initVel * time + acceleration * time * time / 2 ;
		printf("The distance covered is(s): %f m.", distance);
		printf("\n\n\tDo you want to Calculate Again? (y/n)");
		cont = getch();
		if(cont == 'y' || cont == 'Y'){
			repeat = 1 ;
		}else{
			repeat = 0 ;
		}	
	}
}


