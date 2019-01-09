#include<stdio.h>
int sum(int,int);
main(){
	extern int a,b;
	int n;
	n=sum(a,b);
	printf("the sum of numbers is %d",n);
}
int a=10;
int b=6;
int sum(int x,int y){
	return (x+y);
}
