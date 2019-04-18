#include <iostream>
#include <stdio.h>
#include "Board.h"

char board[64];
int chance = 0;

void swap(int a , int b);


Board::Board(){
	setBoard("rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR\0");
}

Board::~Board(){}

// printer the board
void Board::printBoard() {		// This function is doing its work properly dont do anything to it
	for(int i = 8; i > 0; i--) {
		std::cout << i << "    ";
		std::cout << board[i*8 - 8] << "    ";
		std::cout << board[i*8 - 7] << "    ";
		std::cout << board[i*8 - 6] << "    ";
		std::cout << board[i*8 - 5] << "    ";
		std::cout << board[i*8 - 4] << "    ";
		std::cout << board[i*8 - 3] << "    ";
		std::cout << board[i*8 - 2] << "    ";
		std::cout << board[i*8 - 1] << "    ";
		std::cout << std::endl << std::endl;
	}
	std::cout << "     A    B    C    D    E    F    G    H" << std::endl << std::endl;
}

// setter the board
void Board::setBoard(char *fen) {		// This function is doing its work properly dont do anythin to it
	
	int count = 63;
	int i = 0;
	
	while(fen[i] != '\0') {
		if(fen[i] == '/'){
			i++;
		}
		if(fen[i] < 58 && fen[i] > 48) {
			for(int j = 0; j < fen[i] - 48; j++) {
				board[count] = '-';
				count--;
			}
		} else {
			board[count] = fen[i];
			count--;
		}
		i++;
	}
	
}


// Game starting function
void Board::GameOn() {
	while(true){
		char pos[5];
		
		scanf("%s", pos);
		
		if( pos[0] == 'e' && pos[1] == 'x' && pos[2] == 'i' && pos[3] == 't' ) { break; }  // Type exit to quit game
		
//		if( pos[0] > 72 || pos[1] > 56 ) {
//			std::cout << "Invalid input" << std::endl;
//			continue;
//		}
		
		int _pos = str_int(pos);	
		
		std::cout << _pos << std::endl;
	}
}


// Move piece
void Board::movePiece(char *a, char *b){
	int _1 = str_int(a);
	int _2 = str_int(b);
	
	if(board[_1] == 'P'){
		
	}
	
}

// Getters

char* Board::int_str(int a) {
	char ch[3];
	ch[0] = a%8+65;
	ch[1] = a/8+49;
	ch[2] = '\0';
	
	return ch;
}



// additional functions

void swap(int a , int b){
	int temp = board[a];
	board[a] = board[b];
	board[b] = temp;
}



