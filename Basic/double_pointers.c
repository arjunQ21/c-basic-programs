#include <stdio.h>

main(){
	char *ppp ;
	int a = 20 ;
	int *ptr = &a ;
	printf("ptr value = %d", *ptr);
	ppp = "programming language" ;
	ppp = "my name is arjun ahdikari and i am good" ;
	char **p ;
	p = &ppp ;
	int pp ;
	printf("\n %s AND %s", *p, ppp);
	printf("%c", *(ppp + 9));
}
