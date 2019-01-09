#include <stdio.h>
int isNegative( float x){
	if( x < 0.0 ) return 1;
	return 0 ;
}
main(){
	float real[3], imaginary[3];
	int i;
//	char sign = '+';
	printf("This program adds two complex numbers.\n\n");
	for(i = 0 ; i < 2; i++){
		printf("Enter REAL part of number %d:\t", i+1);
		scanf("%f",&real[i] );
		printf("Enter IMAGINARY part of number %d:\t", i+1);
		scanf("%f",&imaginary[i] );		
	} 
	printf("\nThe input was:\n");
	for(i = 0 ; i < 2; i++){
//		sign = (isNegative(imaginary[i])) ? ' ' : '+';
		printf("Number %d:\t%.1f%c%.1fi\n", i+1, real[i], (isNegative(imaginary[i])) ? ' ' : '+', imaginary[i]);
		real[2] += real[i];
		imaginary[2] += imaginary[i];
	}
	printf("\n\nThe sum is:\t%.1f%c%.1fi\n",real[2],(isNegative(imaginary[2])) ? ' ' : '+' , imaginary[2]);
	getch();
}
