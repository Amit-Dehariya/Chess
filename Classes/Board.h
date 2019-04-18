#ifndef BOARD_H
#define BOARD_H

#define check_char(a) ( ( a <= 'H' && a >= 'A' ) ? 1 : 0 );
#define check_num(a) ( ( a <= '8' && a >= '1' ) ? 1 : 0 );


#define str_int(a) ( ( check_char(a[0]) && check_num(a[1]) ) ? a[0]-65+(a[1]-49)*8 : -1 );


class Board
{
	public:
		Board(); // constructor
		
		~Board(); // destructor
		
		void setBoard(char*); // set the board using a fen code
		
		void printBoard(); // print the board state
		
		void GameOn(); // Starts the game
	
	protected:
		
		int* availableMoves(char *a); // Searches for the places that a piece on block *a can move
		
		void movePiece(char *a, char *b); // move the piece from block a to block b (if move is available)
		
		char* int_str(int a); // get string position for any integer in board array
};

#endif
