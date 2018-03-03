#include <stdio.h>

main() {
	int X, Y;
	textbackground(WHITE);
	X = 10; 
	Y = 2;
	gotoxy(X, Y);	textcolor(RED);	printf("NGON NGU");
	textcolor(LIGHTBLUE + BLINK);
	printf("NGON NGU");
}
