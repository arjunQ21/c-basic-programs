#include <stdio.h>
#include <conio.h>
#include <string.h>

void readNumbers( int both );
void showResult( int num ) ;

int first, second;

main(){
	char chooseAgain = 'y' ;
	int choice ;
	while( chooseAgain == 'y'){
		printf("\nWhich Operation Do You Want To Perform ?");
		printf("\n1 => Addition\n2 => Subtraction\n3 => Division\n4 => Increment\n5 => Decrement\n\t");
		scanf("%d", &choice);
		switch( choice ){
			case 1:
				printf("\nAddition: ");
				readNumbers( 1 );
				showResult( first + second );
				break ;
			case 2:
				printf("\nSubtraction: ");
				readNumbers( 1 );
				showResult( first - second );
				break ;
			case 3:
				printf("\nDivision: ");
				readNumbers( 1 );
				showResult( first / second );
				break ;
			case 4:
				printf("\nIncrement: ");
				readNumbers( 0 );
				showResult( ++first );
				break ;
			case 5:
				printf("\nDecrement: ");
				readNumbers( 0 );
				showResult( --first );
				break ;
			default:
				printf("\nInvalid Choice.");																	
		}
		printf("\nWanna Continue Again? (yes/no): ");
		chooseAgain = getch() ;
	}
	printf("Program Exited.");
}

void readNumbers( int both ){
	printf("\nEnter 1st Number: ");
	scanf("%d", &first);
	if( both ){
		printf("\nEnter 2nd Number: ");
		scanf("%d", &second);		
	}
}
void showResult( int num ){
	printf("\nThe Result of the operation is: %d.", num);
}
