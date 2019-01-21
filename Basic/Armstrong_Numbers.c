#include <stdio.h>

void showArmstrong(int start, int end){
	printf("Showing armstrong numbers from %d to %d:\n", start, end);
	int i, rem, sum = 0, temp;
	for( i = start; i<= end; i++){
		temp = i;
		sum = 0 ;
		while( temp > 0){
			rem = temp % 10 ;
			sum += rem * rem * rem ;
			temp /= 10 ;
		}
		if(sum == i ){
			printf("\n\t%d", i);
		}
	}
}

main(){
	int a, b ;
	printf("Enter Lower Range: ");
	scanf("%d", &a);
	printf("Enter Upper Range: ");
	scanf("%d", &b);
	if(a < b)
	showArmstrong(a, b);
}
