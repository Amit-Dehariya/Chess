#if defined _WIN32
	#define PLATFORM "Windows"
#elif defined __linux
	#define PLATFORM "Linux"
#elif defined __macosx
	#define PLATFORM "MacOSX"
#else
	#define PLATFORM "Others"
#endif


#include <iostream>
#include <conio.h>
#include "Classes\\Board.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Board b;
	
	b.printBoard();
	
	b.GameOn();
	
	int i = 0;
	
return 0;
}
