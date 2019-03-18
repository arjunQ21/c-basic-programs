#include <stdio.h>

typedef struct {
	char name[20] ;
	int quantity ;
	float rate ;
} Inventory ;

main(){
	FILE * fptr ;
	int i ;
	int d ;
	fptr = fopen("inventory.txt", "w");
	Inventory inv[3] = {
		{ "AAA", 3, 50},
		{ "BBB", 2, 100},
		{ "CCC", 4, 40 }
	};
	for( i = 0; i< 3 ;i++){
		fprintf(fptr, "%s %d %f\n", inv[i].name, inv[i].quantity, inv[i].rate);
	}
	fclose(fptr);
	
	
}
