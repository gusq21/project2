
//  GameBoard.hpp
//

#pragma once

#include <stdexcept>
#include<iostream>

#include "ExtendableVector.h"
using namespace std;


const int OUTSIDE_BOARD = -1;
const int BOARD_SIZE = 101;

class GameBoard {
public:
	enum Ladders { ONE = 1, FOUR = 4, NINE = 9, TWENTY_ONE = 21, TWENTY_EIGHT = 28, THIRTY_SIX = 36, FIFTY_ONE = 51, SEVENTY_ONE = 71, EIGHTY = 80 };

	enum Chutes { SIXTEEN = 16, FORTY_SEVEN = 47, FORTY_NINE = 49, FIFTY_SIX = 56, SIXTY_TWO = 62, SIXTY_FOUR = 64, EIGHTY_SEVEN = 87, NINETY_THREE = 93, NINETY_FIVE = 95, NINETY_EIGHT = 98 };

	// Build the gameboard
	// TO DO: implement this function
	void buildBoard();


	GameBoard() {
		// TODO: implement this function properly
		board.reserve(BOARD_SIZE);
		buildBoard();



		throw std::logic_error("not implemented yet");
	}

	// If player lands on chutes or ladders, returns the new position.
	// Otherwise, returns the player's current position.
	// If the player's position is outside of the gameboard, throws index out of bounds exception
	// TO DO: implement this function properly
	int checkChutesLadders(int position) {
		if ((position < 0) || (position >= BOARD_SIZE)) {
			throw range_error("index out of bounds");
		}
		/*if (position == ONE) {
			cout << "You have landed on a ladder";
			position = gameBoardVector[38];
		}
		if (position == FOUR) {
			cout << " You have landed on a ladder";
			position = gameBoardVector[14];
			
		}
		if (position == NINE) {
			cout << " You have landed on a ladder";
			position = gameBoardVector[31];

		}
		if (position == TWENTY_EIGHT) {
			cout << " You have landed on a ladder";
			position = gameBoardVector[84];

		}
		if (position == TWENTY_ONE) {
			cout << " You have landed on a ladder";
			position = gameBoardVector[42];

		}
		if (position == THIRTY_SIX) {
			cout << " You have landed on a ladder";
			position = gameBoardVector[44];
		}
		if (position == FIFTY_ONE) {
			cout << " You have landed on a ladder";
			position = gameBoardVector[67];

		}
		if (position == SEVENTY_ONE) {
			cout << " You have landed on a ladder";
			position = gameBoardVector[91];

		}
		if (position == EIGHTY) {
			cout << " You have landed on a ladder";
			position = gameBoardVector[100];
			cout << "Congratulations you win!";


		}

		if (position == SIXTEEN) {
			cout << " You have landed on a chute!";
			position = gameBoardVector[6];

		}
		if (position == FORTY_SEVEN) {
			cout << " You have landed on a chute!";
			position = gameBoardVector[26];


		}
		if (position == FORTY_NINE) {
			cout << " You have landed on a chute!";
			position = gameBoardVector[11];

		}
		if (position == SIXTY_TWO) {
			cout << " You have landed on a chute!";
			position = gameBoardVector[19];

		}
		if (position == SIXTY_FOUR) {
			cout << " You have landed on a chute!";
			position = gameBoardVector[60];

		}
		if (position == EIGHTY_SEVEN) {
			cout << " You have landed on a chute!";
			position = gameBoardVector[24];

		}
		if (position == NINETY_THREE) {
			cout << " You have landed on a chute!";
			position = gameBoardVector[73];

		}
		if (position == NINETY_FIVE) {
			cout << " You have landed on a chute!";
			position = gameBoardVector[75];

		}
		if (position == NINETY_EIGHT) {
			cout << " You have landed on a chute!";
			position = gameBoardVector[78];

		} 


		cout << "Your current position is " << position << "!" << endl; */

		switch (position) {
		case ONE:
			return position = 38;
		case FOUR:
			return position = 14;
		case NINE:
			return position = 31;
		case TWENTY_ONE:
			return position = 42;
		case TWENTY_EIGHT:
			return position = 84;
		case THIRTY_SIX:
			return position = 44;
		case FIFTY_ONE:
			return position = 67;
		case SEVENTY_ONE:
			return position = 91;
		case EIGHTY:
			return position = 100;
		case SIXTEEN:
			return position = 6;
		case FORTY_SEVEN:
			return position = 26;
		case FORTY_NINE:
			return position = 11;
		case FIFTY_SIX:
			return position = 53;
		case SIXTY_TWO:
			return position = 19;
		case SIXTY_FOUR:
			return position = 60;
		case EIGHTY_SEVEN:
			return position = 24;
		case NINETY_THREE:
			return position = 73;
		case NINETY_FIVE:
			return position = 75;
		case NINETY_EIGHT:
			return position = 78;
		default:
			return position;
		}
		// TODO: implement this function properly
		throw std::logic_error("not implemented yet");
	}

private:
	// TO DO: add storage for squares including square of chutes and ladders
	// Requirement: use ExtendableVector to store the square
	ExtendableVector<int> board;
	
	
	}
;
