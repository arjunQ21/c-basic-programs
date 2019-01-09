#include <stdio.h>

void main(){
	float math, physics, chemistry ;
	printf("\nEnter marks of Math:\t\t");
	scanf("%f", &math);
	printf("\nEnter marks of Physics:\t\t");
	scanf("%f", &physics);
	printf("\nEnter marks of Chemistry:\t\t");
	scanf("%f", &chemistry);
	if((math + physics) >= 150){
		printf("\n\n\t\tEligible");
	}else{
		if((math + physics + chemistry) >= 200){
			printf("\n\n\t\tEligible");
		}else if(math >= 60 && physics >= 50 && chemistry >= 40){
			printf("\n\n\t\tEligible");
		}else{
			printf("\n\n\t\tNot Eligible.");
		}
	}
}
