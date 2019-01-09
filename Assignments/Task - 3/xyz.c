#include <stdio.h>

main(){
	int x = 16, y= 18, z ;
	y += x++;
	z = ++x + y++ ;
	x = x + y + z-- ;
	printf("x = %d, y = %d, z= %d", x, y, z);
}
