#include <iostream>
#define MAXNUMBER 100

int fac(int);
int numbergame(void);

int main() {
	int choice;

	do {
		std::cout << "1: faculteit: " << std::endl;
		std::cout << "2: numbergame: " << std::endl;
		std::cout << "3: Stop: " << std::endl;
		std::cout << "choice: ";
		std::cin >> choice;

		switch(choice) {
			case 1:
				int a;
				std::cout << "faculteit of: ";
				std::cin >> a;
				std::cout << "result is: " << fac(a) << std::endl;
				break;
			case 2:
				numbergame();
				break;
		}
	} while(choice != 3);

	return 0;
}

int fac(int n) {
	int ret = 1;

	for (int i = 1; i <= n; i++) {
		ret *= i;
	}

	return ret;
}

int numbergame() {
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

	return amountGuessed;
}
