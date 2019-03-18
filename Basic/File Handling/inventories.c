#include <stdio.h>

int lastId  = 0 ;
char conversionString[] = "%d %s %d %.2f\n";
typedef struct {
	int id ;
	char name[20] ;
	int quantity ;
	float rate ;
} Inventory ;

void readConsoleData( Inventory * );
void showData( Inventory * );
void line(){
	printf("\n------------------------------------");
}
void addToFile( char fileName[], Inventory * invt );
//void addAllToFile( char fileName[], Inventory * invt ) ;
Inventory * loadFromFile( char fileName[] , int howMany );

main(){
	Inventory * inv ;
	int i ;
	unsigned int n ;
	char fileName[] = "invts.txt" ;
//	printf("How many inventories do u want ? ");
//	scanf("%d", &n );
//	inv = (Inventory *) calloc( n, sizeof(Inventory));
//	for( i = 0 ; i < n ; i ++){
//		readConsoleData( inv + i );
//		showData( inv + i );
//		addToFile(fileName, inv + i );
//	}
	Inventory * invF ;
	printf("1");
	invF = loadFromFile(fileName, 2);
	printf("1");
	showData(invF);
}
Inventory* loadFromFile( char fileName[] , int howMany ){
	FILE * f ;
	int i = 0  ;
	Inventory * inv ;
	f = fopen(fileName, "r");
	while( !feof(f) ){
		fscanf(f, conversionString, &(inv + i )->id, (inv + i )->name, &(inv + i )->quantity, &(inv + i )->rate);
		i ++ ;
		if( i > howMany) break ;
	}
	fclose(f);
	return inv ;
}
void addToFile( char fileName[], Inventory * invt ){
	FILE * f ;
	f = fopen(fileName, "a+" );
	if ( f != NULL ){
		fprintf(f, conversionString, invt->id, invt->name, invt->quantity, invt->rate );
		printf("\n Successfully added data of id '%d' to file %s.", invt->id, fileName );
		fclose(f) ;	
	}else{	
		printf("\n Error occurred opening file.");
	}
}
void readConsoleData( Inventory * invt ){
	lastId ++ ;
	invt->id = lastId ;
	line() ;
	printf("\nEnter Data for Inventory of ID '%d': ", invt->id );
	printf("\nEnter Product Name: ");
	scanf("%s", invt->name );
	printf("\nEnter Quantity: ");
	scanf("%d", &invt->quantity );
	printf("\nEnter Rate: ");
	scanf("%f", &invt->rate );
	line() ;
}
void showData( Inventory * invt ){
	printf("\nDisplaying data of inventory id '%d': ", invt->id );
	line();
	printf("\nProduct Name: %s, \nQuantity: %d, \nRate: %.2f", invt->name, invt->quantity, invt->rate );
	line() ;
}
