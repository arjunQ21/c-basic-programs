#include <graphics.h>
#include <stdio.h>
int main(){
	int gd = DETECT, gm, errorCode ;
	initgraph(&gd, &gm, "c:\\tc\\bgi");
	errorCode = graphresult() ;
	if( errorCode != grOk ){
		printf("Graphics init failure.");
		exit(1);
	}
	setColor(GREEN);
	line(0, 50, 200, 300);
	getch() ;
	closegraph();
	return 0 ;
}
