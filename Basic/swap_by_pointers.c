#include<stdio.h>
int swap(int *,int *);
main(){
	int *a, *b;
	printf("Enter first number:\n");
	scanf("%d",&a);
	printf("Enter second number:\n");
	scanf("%d",&b);
	printf("The values before swapping are: a = %d, b = %d.\n", a, b);
	swap(&a, &b);
	printf("The values after swapping are: a = %d, b = %d.\n", a, b);	

}
int swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
//	printf("after swaping a is %d and b is %d \n",x,y);
//	return x,y;
		
}
