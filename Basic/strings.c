#include <stdio.h>

void main(){
	//Hand Coded String
	//User bata input naliyeko wala string
	//[50] matlab yo string ma maximum 50 ota character huna sakxan.
	char handCodedString[50] = "Hi, I am a handcoded String.";
	//displaying that string in console
	printf(handCodedString);
	//USER BATA INPUT LINI WALA STRING
	char userInputString[50] ;
	//asking for input
	printf("\n\n\tEnter Your First Name: \n");
	//reading that input..and storing the obtained value in userInputString variable
	//%s is used for strings, as is %d for integers.
	scanf("%s", userInputString);
	//Showing User's Input in console screen
	printf("Your Input String was: %s \nThe hand coded string was: %s", userInputString, handCodedString);
	//This is a very very tiny example using strings..
	//There's much more to strings than just this.
}
