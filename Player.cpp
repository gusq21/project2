//
//  Player.cpp
//

#include "Player.h"

// TO DO: implement Player's assignment operator
Player& Player::operator=(const Player& p) {
	// TODO: implement this function properly
	throw std::logic_error("not implemented yet");
}

// return player's new position after player rolls die
// If the new position is outside of the board, player stays put
// If not, player moves to the new square = player's postion + die's face value
// TO DO: implement this function to move player to the new postion
//        after player rolls die. Position must be inside the board
int Player::rollDieAndMove() {
	int faceValue = die.getFaceValue();
		int newPosition = faceValue + position;
		if (newPosition > 100) {
			cout << "you must land on 100 to win, you will be returned to your previous position" << endl;
			return (position - faceValue);
		}

		cout << newPosition;

	
	
	// TODO: implement this function properly
	throw std::logic_error("not implemented yet");
}
