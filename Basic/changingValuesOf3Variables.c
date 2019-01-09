#include <stdio.h>

void main(){
	int x, y, z, temp ;
	printf("Enter X:\n");
	scanf("%d",&x);
	printf("Enter Y:\n");
	scanf("%d",&y);
	printf("Enter Z:\n");
	scanf("%d",&z);
	temp = x;
	x = y;
	y = z;
	z = temp;
	printf("\nFinal value of X is: %d",x);
	printf("\nFinal value of Y is: %d",y);
	printf("\nFinal value of Z is: %d",z);
//	getch();
	
}


