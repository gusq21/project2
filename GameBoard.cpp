//
//  GameBoard.cpp
//

#include "GameBoard.h"

// Build the gameboard
// If the landing square is a chute, set the position to the corresponding lower square
// I.e., player slides down to the lower square
// If the landing square is a ladder, set the position to the corresponding higher square
// Player climbs up to the higher square
// Otherwise, player stays put at the landing square
// TO DO: implement this method
void GameBoard::buildBoard() {
	// TODO: implement this function properly
	for (int i = 0; i <= board.size(); i++)
		board[i] = i;
	for (int i = 0; i <= board.size(); i++)
		board[i] = checkChutesLadders(i);

	throw std::logic_error("not implemented yet");
}
