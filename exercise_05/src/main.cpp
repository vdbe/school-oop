#include <iostream>
#include <cstdlib>

#define EYES 6
#define TURNS 6000

int main() {
	int throw_results[EYES] = { 0 };

	srand(time(NULL));

	int number;
	for (int i = 0; i < TURNS; i++) {
		number = rand() % EYES;
		switch(number) {
			case 0:
				throw_results[0]++;
				break;
			case 1:
				throw_results[1]++;
				break;
			case 2:
				throw_results[2]++;
				break;
			case 3:
				throw_results[3]++;
				break;
			case 4:
				throw_results[4]++;
				break;
			case 5:
				throw_results[5]++;
				break;
		}
	}

	for(int i = 0; i < EYES; i++) {
		std::cout << i + 1 << ": " << throw_results[i] << std::endl;
	}

	return 0;
}
