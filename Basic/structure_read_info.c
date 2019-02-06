#include <stdio.h>
#include <string.h>
#include <process.h>

#define STUDENTS 4

struct Address {
	int ward ;
	char street_name[30]  ;
	char city[30]  ;
};
struct DOB{
	int day ;
	int month  ;
	int year ;
};
struct Students{
	char name[50] ;
	float gpa[8] ;
	float marks[6] ;
	struct Address address ;
	struct DOB dob ;
	float avgGPA  ;
};
char subjects[6][20] = {"Maths","English","Physics","C-Prog","PST","FIT"};
struct Address readAddress( struct Address addr);
struct DOB readDOB( struct DOB dob);
struct Students readStudentData(int position);
void line() ;
void showTitle() ;
void displayStudent( struct Students student, int position ) ;

void displayStudent( struct Students student, int position ){
	int i ;
	printf("\n");
	line() ;
	printf("\n Showing Student with ID: %d\n", position) ;
	printf("Name: %s\n",student.name) ;
	printf("Average GPA: %2f\n", student.avgGPA) ;
	printf("Marks:");
	for( i = 0; i< 6 ; i++){
		printf("\n\t%s : %2f", subjects[i], student.marks[i] );
	}
	printf("\n Address: \n\tCity: %s\n\tStreet Name: %s\n\tWard No.: %d", student.address.city, student.address.street_name, student.address.ward );
	printf("\n Date Of Birth:  %d-%d-%d\n", student.dob.day, student.dob.month, student.dob.year);
	line();
}

main(){
	int i ;
	struct Students student[ STUDENTS ];	
	for ( i = 0 ;  i < STUDENTS ; i++){
		student[i] = readStudentData( i + 1 );
		displayStudent(student[i], i+1 );
	}
	printf("Showing students with GPA more than 3.0.\n");
	for( i = 0 ; i < STUDENTS ; i++){
		if( student[i].avgGPA > 3.0){
			displayStudent(student[i], i+1 );
		}
	}
	printf("Showing students from mahendrapool: \n");
	for( i = 0; i < STUDENTS ; i ++){
		if( strcmp(student[i].address.street_name, "mahendrapool") == 0){
			displayStudent( student[i], i+1);
		}
	}
	printf("Showing students whose birthyear is below 2000 AD.\n");
	for( i = 0; i < STUDENTS ; i ++){
		if( student[i].dob.year < 2000 ){
			displayStudent( student[i], i+1);
		}
	}	
	
}
struct Students readStudentData(int position){
	struct Students student ;
	int i ;
	printf("\nEnter the data of Student %d:", position);
	printf("\n Enter name: ");
	scanf("%s", student.name );
	printf("\n Enter GPA In: ");
	for(i =0 ;i < 8; i++){
		printf("\n\tsemester %d : ", i+1) ;
		scanf("%f", &student.gpa[i]);
		student.avgGPA += student.gpa[i];
	}
	student.avgGPA /= 8 ;
	printf("\nEnter marks in") ;
	for( i = 0; i < 6; i++){
		printf("\n   %s:", subjects[i] );
		scanf("%f", &student.marks[i] );
	}	
	printf("Enter Address Of student %d:", position );
	student.address = readAddress(student.address);
	printf("Enter DOB of student %d: ", position);
	student.dob = readDOB(student.dob) ;
	return student ;
}
struct DOB readDOB( struct DOB dob){
	printf("\n Enter day:");
	scanf("%d", &dob.day );
	printf("\n Enter month:");
	scanf("%d", &dob.month );
	printf("\n Enter year:");
	scanf("%d", &dob.year );
	return dob ;
}

struct Address readAddress( struct Address addr){
	printf("\n Enter ward no.");
	scanf("%d", &addr.ward );
	printf("\n Enter street name: ");
	scanf("%s", addr.street_name );
	printf("Enter city name: ");
	scanf("%s", addr.city );
	return addr ;
}

void line(){
	printf("------------------------------------------------------------------------------------\n");
}

void showTitle(){
	printf("\n");
	line() ;
	printf("%3s|%20s|%30s|%10s|%6s|%6s|%7s|\n", "ID","Name","Address", "DOB", "Maths","Physics", "Avg GPA");
	line() ;
}

//void displayInfoSingle( struct Students student, int position){
//	printf("\n Displaying Info of Student %d", position );
//	showTitle() ;
//	printf("%3d|%20s|%14s-%11s-%2d|%4d-%2d-%2d|%6d|%6d|%7f|\n", position,student.name,student.address.city,student.address.street_name,student.address.ward ,student.dob.year,student.dob.month,student.dob.day, student.marks[0],student.marks[1], student.avgGPA);
//	line() ;
//}
