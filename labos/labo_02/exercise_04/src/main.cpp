#include <iostream>
#include <cstdlib>

#include "dicethrows.hpp"

int main() {
	srand(time(NULL));


	int max_throws = 60;
	int scales[3] = {1, 10, 100};

	for(int ii = 0; ii < 3; ii++) {
		DiceThrows diceThrow;

		for(int jj = 0; jj < max_throws; jj++) {
			diceThrow.throw_dice();
		}

		diceThrow.histogram(scales[ii]);
		max_throws *= 10;
	}

	return 0;
}
