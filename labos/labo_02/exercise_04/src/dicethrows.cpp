#include <iostream>
#include <stdlib.h>

#include "dicethrows.hpp"

int DiceThrows::throw_dice(void) {
	int eye = rand() % EYES;
	this->throw_results[eye]++;

	return eye;
}

int DiceThrows::histogram(int scale) {
	for(int i = 0; i < EYES; i++) {
		int count = throw_results[i] / scale;
		std::cout << i + 1 << ": " << throw_results[i] <<  " -> ";
		for(int j = 0; j < count; j++) {
			std::cout <<  "|";
		}
		std::cout << std::endl;
	}
	return 0;
}
