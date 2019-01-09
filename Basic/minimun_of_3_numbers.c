#include <stdio.h>

int min(int first, int second){
	static int counter ;
	counter ++ ;
	printf("Call %d: The miminum of %d and %d is ",counter, first, second);
	if(first < second){
		printf("%d\n", first);
		return first;
	}
	printf("%d\n", second);
	return second;
}

main(){
	int a, b, c;
	printf("Enter 3 numbers:");
	scanf("%d%d%d", &a, &b, &c);
	printf("The minimum number is: %d", min(a, min(b,c)));
}
