/*
Bug in this program is that when a 0 is in input number, it gets lost in the output,
because it doesnot get added to numbers array
*/

#include <stdio.h>
#include <math.h>

#define LIMIT 10

void addToNumbers( int num) ;
void showArray( int arr[]) ;
void show(int a);
int firstDigitOf( int );
int removedFirstDigit( int );
void resetNumbers();


char l_spacing[] = " ";
char def_blank[] = " ";
char def_zero[] = " ";
int numbers[ LIMIT ] = {0} ;
int chars = 1 ;
//int currentMap[7] ;

int map[10][7]={
	{1, 1, 1, 0, 1, 1, 1},
	{0, 0, 1, 0, 0, 1, 0},
	{1, 0, 1, 1, 1, 0, 1},
	{1, 0, 1, 1, 0, 1, 1},
	{0, 1, 1, 1, 0, 1, 0},
	{1, 1, 0, 1, 0, 1, 1},
	{1, 1, 0, 1, 1, 1, 1},
	{1, 0, 1, 0, 0, 1, 0},
	{1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 0, 1, 1}	
};

main(){
	int number ;
	printf("Written By:\n\tArjun Adhikari");
	printf("\nHey, This program shows Seven-Segment-Display of any numbers you enter.\n");
	
	char continueShowing = 'y' ;
	
	while(continueShowing == 'Y' || continueShowing == 'y'){
		printf("\nEnter a number ( maximum %d digits ): ", LIMIT);
		scanf("%d", &number);	
		show(number);
		printf("\nPress: 'Y' or 'y' to try again,\tAny key to stop this program.\n");
		continueShowing = getch();		
	}
}

//FUNCTIONS 

void show( int num){
	int n;
	resetNumbers() ;
	addToNumbers( num );
//	printf("\nArray Numbers:\n");
//	showArray(numbers);
	printf("\nShowing Seven Segement Display Of %d:\n\n", num);
	//SHOWING FIRST LINE
	for( n = 0 ; n < chars ; n++){
		//letter spacing and default blank space
		//printf("%s", l_spacing);
		// default blank space
		printf("%s", def_blank);
		//number dependent
		if(map[numbers[n]][0] == 1){
			printf("__");
		}else{
			printf("%s%s", def_zero, def_zero);
		}
		// default blank space
		printf("%s", def_blank);
	}
	printf("\n");
	//END FIRST LINE
	//SHOWING SECOND LINE
	for( n = 0 ; n < chars ; n++){
		//first pipe
		if(map[numbers[n]][1] == 1){
			printf("|");
		}else{
			printf("%s", def_zero);
		}
		//second underscore index = 3
		if(map[numbers[n]][3] == 1){
			printf("__");
		}else{
			printf("%s%s", def_zero, def_zero);
		}
		//second pipe index = 2
		if(map[numbers[n]][2] == 1){
			printf("|");
		}else{
			printf("%s", def_zero);
		}				
	}	
	printf("\n");
	//END SECOND LINE
	//THIRD LINE
	for( n = 0 ; n < chars ; n++){
		//third pipe
		if(map[numbers[n]][4] == 1){
			printf("|");
		}else{
			printf("%s", def_zero);
		}
		//third underscore index = 6
		if(map[numbers[n]][6] == 1){
			printf("__");
		}else{
			printf("%s%s", def_zero, def_zero);
		}
		//fourth pipe index = 5
		if(map[numbers[n]][5] == 1){
			printf("|");
		}else{
			printf("%s", def_zero);
		}				
	}	
	printf("\n");
	//END THIRD LINE
	//little margin for display
	printf("\n");		
}

void resetNumbers(){
	int i ;
	for( i = 0 ; i < LIMIT ; i++){
		numbers[i] = -1 ;
	}
}

int removedFirstDigit(int n){
	/* 
	 12345 => 54321 => 5432 => 2345
	 BUG: 2034 => 4302 => 430 => 034 = 34 , insted of 034  
	*/
	int rem, last, reverse = 0, final = 0;
	while( n > 0){
		last = n % 10 ;
		n = n/10 ;
		reverse = reverse * 10 + last ;
//		printf("1\n");
	}
//	return last ;
	reverse = reverse / 10 ;
	while( reverse > 0){
		last = reverse % 10 ;
		reverse = reverse/10 ;
		final = final * 10 + last ;
//		printf("2\n");
	}
	return final ;		
}

int firstDigitOf( int n){
	int rem, last;
	while( n > 0){
		last = n % 10 ;
		n = n/10 ;
	}
	return last ;
}

void addToNumbers( int num ){
	num = abs(num);
	int i ;
	for( i = 0; i < LIMIT ; i++){	
		if( num > 0 ){
			numbers[i] = firstDigitOf(num) ;
			num = removedFirstDigit( num );
			chars = i + 1 ;		
		}
	}
}

void showArray( int arr[]){
	int i ;
	for( i = 0 ; i < LIMIT ; i++){
		printf("\t%d,", arr[i]);
	}
}
