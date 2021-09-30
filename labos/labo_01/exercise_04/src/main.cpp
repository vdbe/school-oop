#include <iostream>
#include <cstdlib>

#define MAXNUMBER 1000

int main() {
	int numberToGuess = 0;
	int guessedNumber = 0;
	int amountGuessed = 0;

	srand(time(NULL));
	numberToGuess = rand() % MAXNUMBER + 1;
	
	while(guessedNumber != numberToGuess) {
		std::cout << "Give a number: ";
		std::cin >> guessedNumber;
		amountGuessed++;

		if (guessedNumber < numberToGuess) {
			std::cout << "Number too low" << std::endl;
		} else if (guessedNumber > numberToGuess) {
			std::cout << "Number too high" << std::endl;
		}
	}

	std::cout << "guessed correctly! " << amountGuessed << " needed" << std::endl;

	return 0;
}
