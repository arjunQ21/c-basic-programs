#include <stdio.h>
#include <string.h>
#include <conio.h>

#define STUDENTS 10

/* Structure Declarations */

typedef struct {
	int ward ;
	char street_name[30]  ;
	char city[30]  ;
} Address ;
typedef struct {
	int day ;
	int month  ;
	int year ;
} DOB;
typedef struct {
	int rollNo ;
	char name[50] ;
	float gpa[8] ;
	float marks[6] ;
	Address address ;
	DOB dob ;
	float avgGPA  ;
} Student ;

/* Global Variables */

char subjects[6][20] = {"Maths","English","Physics","C-Prog","PST","FIT"};
int lastRollNo = 0 ;

/* Function Declarations */

void readAddress( Address *) ;
void readDOB( DOB *) ;
void readStudent( Student *) ;
void line() ;
void displayStudent( Student *student ) ;
int isFromMP( Student * student) ;
int isBelow2000( Student * student);
int hasGoodGPA( Student * student );


main(){
	int i ;
	char chooseAgain = 'y' ;
	int choice = 0 ;
	Student student[ STUDENTS ] ;	
	for ( i = 0 ;  i < STUDENTS ; i++){
		readStudent( &student[i] );
		displayStudent(&student[i] );
	}
	printf("\n Taking data completed.\n");
	while(chooseAgain == 'y'){
		printf("\nYou have the following options.\n\n");
		printf("1 => See Students from mahendrapool\n2 => See students born before 2000 AD\n3 => See students whose average GPA is above 3.0 .");
		scanf("%d", &choice );
		switch(choice){
			case 1:
				printf("\n Showing Students from mahendrapool.");
				for( i = 0 ; i < STUDENTS ; i++){
					if( isFromMP(&student[i])){
						displayStudent( &student[i] );
					}
				}
				break ;
			case 2:
				printf("\n Showing Students born before 2000 AD.");
				for( i = 0 ; i < STUDENTS ; i++){
					if( isBelow2000(&student[i])){
						displayStudent( &student[i] );
					}
				}
				break ;		
			case 3:
				printf("\n Showing Students whose average GPA is above 3.0.");
				for( i = 0 ; i < STUDENTS ; i++){
					if( hasGoodGPA(&student[i])){
						displayStudent( &student[i] );
					}
				}
				break ;	
			default:
				printf("\n You chose a wrong option.");							
		}
		printf("\n Do you want try again? (Yes/No): ");
		chooseAgain = getch() ;
	}
	printf("\n\nYou chose to exit.");
}
int hasGoodGPA( Student * student){
	if( student->avgGPA > 3.0){
		return 1 ;
	}
	return 0 ;
}
int isBelow2000( Student * student){
	if(student->dob.year < 2000){
		return 1 ;
	}
	return 0 ;
}
int isFromMP( Student * student){
	if( strcmp(student->address.street_name, "mahendrapool") == 0){
		return 1 ;
	}
	return 0 ;
}
void readStudent( Student *student ){
	student->rollNo = ++ lastRollNo ;
	int i ;
	printf("\nEnter the data of Student with Roll No. %d:", student->rollNo );
	printf("\n Enter name: ");
	scanf("%s", student->name );
	printf("\n Enter GPA In: ");
	for(i =0 ;i < 8; i++){
		printf("\n\tsemester %d : ", i+1) ;
		scanf("%f", &student->gpa[i]);
		student->avgGPA += student->gpa[i];
	}
	student->avgGPA /= 8 ;
	printf("\nEnter marks in") ;
	for( i = 0; i < 6; i++){
		printf("\n   %s:", subjects[i] );
		scanf("%f", &student->marks[i] );
	}	
	printf("Enter Address Of student %d:", student->rollNo );
	readAddress( &student->address );
	printf("Enter DOB of student %d: ", student -> rollNo );
	readDOB( &student->dob );
}
void displayStudent( Student *student ){
	int i ;
	printf("\n");
	line() ;
	printf("\t\t\t  %*s\n",( 15 - (strlen(student->name))/2), student->name ) ;
	printf("Roll No: %d\n", student->rollNo );
	printf("Average GPA: %.2f\n", student->avgGPA) ;
	printf("Marks:");
	for( i = 0; i< 6 ; i++){
		printf("\n\t%s : %.0f", subjects[i], student->marks[i] );
	}
	printf("\n Address: \n\tCity: %s\n\tStreet Name: %s\n\tWard No.: %d", student->address.city, student->address.street_name, student->address.ward );
	printf("\n Date Of Birth:  %d-%d-%d\n", student->dob.day, student->dob.month, student->dob.year);
	line();
}
void readDOB( DOB * dob ){
	printf("\n Enter day:");
	scanf("%d", &dob->day );
	printf("\n Enter month:");
	scanf("%d", &dob->month );
	printf("\n Enter year:");
	scanf("%d", &dob->year );
}

void readAddress( Address *addr ){
	printf("\n Enter ward no.");
	scanf("%d", &addr->ward );
	printf("\n Enter street name: ");
	scanf("%s", addr->street_name );
	printf("Enter city name: ");
	scanf("%s", addr->city );
}

void line(){
	printf("------------------------------------------------------------------------------------\n");
}


