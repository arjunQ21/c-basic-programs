#include <stdio.h>
#include <conio.h>
/*
Below is a function that prints straight line on console screen.
For now, you can use the following statment => printf("----------------------------------\n");
repeatedly in place of straightLine() if you dont wanna know about how functions work.
*/

void straightLine(){
	printf("----------------------------------\n");
}

void main(){
//	VARIBALE DECLARATION
	int i, j, y;
	int floors = 1 ;
	int cFloor, cArea, cRate, cProduct, cTotal;
	int fullTotal = 0 ;
	/*
	area[15] is an array that can hold maximum 15 values in it.
	This array stores the surface area of different floors.
	You can set the maximum limit of no. of allowed floors in the house by changing the number 15 to other values.
	*/
	int area[15] ={100} ;
	/*
	rate[7] is an array that holds the tax rate per sq.unit of each floors, 
	10 => for ground floor,
	12 => for first floor,
	14 => for second floor,
	and so on..
	*/
	int rate[7] = {10, 12, 14, 15, 20, 25, 30};
	/*
	you can increase or decrease the number of years for calculation by inserting or removing new items in the years array below.
	*/
	char years[2][15] = { "2074/2075", "2075/2076" } ;
	/*
		while repeatInput's value is 1, the user will be repeatedly asked to input the number of floors( only if 
		the user provide invalid number of floors).
		The loop stops when its value is 0 .
	*/
	int repeatInput = 1 ;
	
//	PROGRAM STARTS
/*
	\t is just like \n, difference is, \n brings new line, while \t is like pressing TAB in keyboard while typing,
	it prints blank spaces in console
*/
	printf("\n Written By: \n\tName: Arjun Adhikari\n\tRollNo: 2018SE05\n");
	printf("\nHi, this program helps you to calculate total tax, if you provide floor area of different Floors of your house.\n");
//	Taking input from user, for the number of floors	
	while(repeatInput == 1 ){
		printf("How many floors does the house have?\n");
		scanf("%d",&floors);
		/*
		(sizeof(area)/sizeof(area[0]))
		all this does is find the length of the passed array,
		here it finds the length of area array
		This function has been used below too to find the 
		length of other arrays.
		*/
		if(floors >= (sizeof(area)/sizeof(area[0]))){
			printf("Who lives in a house that tall?\nEnter Some Values Less than or equal to %d.\n",(sizeof(area)/sizeof(area[0]) - 1));
		}else{
			repeatInput = 0 ;
		}			
	}
//	Repeatedly asking for surface area of different floors from user and adding that data in area array.
	for(i = 0 ; i< floors; i++){
		if(i == 0){
			printf("Enter Surface Area of Ground Floor: ");
		}else{
			printf("Enter Surface Area of Floor %d: ",i);
		}
		
		scanf("%d",&area[i]);
	}
//	MAIN CALCULATION SECTION
	// Repeating the calculation for the number of years( as varibale y), set in the years array. 
	for(y = 0 ; y < (sizeof(years)/sizeof(years[0])) ; y++){
		/*
		cRate variable stores the specific tax rate, for specific floor,
		cArea variable stores the area of current floor,
		cFloor variable stores the value of floor number(eg, Ground Floor(value = 0), 1st floor(value = 1).. and so on),
		cProduct variable stores the product of tax rate and surface area,
		cTotal variable stores the sum of different cProduct variable's values,
		cTotal is the total tax to be paid for 1 year,
		fullTotal variable is the sum of different cTotal variables, i.e, Full Tax to be paid for 2 years.
		*/
		cTotal = 0 ;
		printf("\n\nCalculating Tax For Year %s:\n", years[y]);
		straightLine();
		printf("Floor\t|Area\t|Rate\t|Total(Rs)\n");
		straightLine();
		for( i = 0 ; i < (sizeof(area)/sizeof(area[0])); i++){
			if(area[i] == 0) break ;
			cFloor = i ;
			cArea = area[i];
			/*
			finding rates for different floors,
			if Floor number(cFloor) is less than 7, take the handcoded data from rate array,
			if cFloor is not less than 7 (i.e, more than 7, or equal to 7) then according to question the tax rate
			increases by Rs.10 for each additional floors.i.e,
			for seventh floor, rate is 30+10,
			30+20 for 8th floor,
			30+30 for 9th floor,
			and so on..
			*/
			if(i < 7){
				cRate = rate[i] ;
			}else{
				cRate = (i - 6) * 10 + rate[6] ; 
			}
			cProduct = cArea * cRate ;
			cTotal += cProduct ;
			printf("%d\t|%d\t|%d\t|%d\t|\n",cFloor, cArea, cRate, cProduct);
		}
		straightLine();
		printf("Sum\t \t \t %d\t|\n", cTotal);
		straightLine();
		fullTotal += cTotal ;
	}
	printf("\n\nTotal tax to be paid: Rs.%d", fullTotal);
	printf("\n Have a Good Day!!\n\n\tBye  :)\n\n");
	/*
	about getch();
	If you want to run this program from .exe file, i.e, outside of Dev-C++ application, the console screen
	disappears once the program completes.
	If you put getch() function at the end of your program, the console screen doesnt disappear unless you enter
	some keys.
	In short, This function holds the console screen after the program completes executing.
	*/
	getch();
}





