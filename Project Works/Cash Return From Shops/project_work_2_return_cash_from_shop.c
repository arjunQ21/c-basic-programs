#include <stdio.h>

#define NOTES 9

int notes[NOTES] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
int numberOf[NOTES] = {0} ;
char spacing[]="  ";
char padding[] = "  ";

void line(){
	printf("%s------------------\n", spacing);
}

void tableCols(int first, int second){
	printf("%s|%s%4d%s|%s%3d%s|\n", spacing, padding, first, padding, padding, second, padding);
	line();
}

main(){
	int i, j, times;
	int remaining  ;
	int expense, paid ;
	
	printf("Written By:\n\tArjun Adhikari");
	printf("\nHey, This program helps you to find out the number of cashes you get in return after you make a purchase.\n");
	printf("Kati Rupya ko saman kiniyo? Rs. ");
	scanf("%d", &expense);	
	while(1){
		printf("Kati tirni ho ta? Rs.");
		scanf("%d", &paid);
		if( paid < expense){
			printf("Rs.%d vanda badi dini vaye de, natra tero sabbai sampati chordinxu.\n", expense);
		}else{
			break ;
		}		
	}
	
	remaining = paid - expense ;
	printf("You will get Rs. %d in return.\n", remaining );
	if(remaining > 0){
		for( i = 0; i < NOTES  ; i++){
			if( remaining >= notes[i] ){
				times = remaining / notes[i];
				remaining %= notes[i];
				numberOf[i] = times ;
			}
		}
		printf("Cash you will get:\n\n");	
		line();
		printf("%s|%s|%s|\n", spacing, "  Notes ", " Number");
		line();	
		for( i = 0 ; i < NOTES ; i++){
			if(numberOf[i] > 0){
				tableCols(notes[i], numberOf[i]);
			}
		}		
	}
}
