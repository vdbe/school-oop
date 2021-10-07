#include <iostream>
#include <cstdlib>

#define EYES 6
#define TURNS 60

int f1(int, int*);

int main() {
	srand(time(NULL));

	for(int k = 1; k <= 100; k *= 10) {
		int throw_results[EYES] = { 0 };
		f1(TURNS * k, throw_results);

		std::cout << "Turns: "  << TURNS * k << std::endl;
		for(int i = 0; i < EYES; i++) {
			int count = throw_results[i] / (k);
			std::cout << i + 1 << ": ";
			for(int j = 0; j < count; j++) {
				std::cout <<  "=";
			}
			std::cout << std::endl;
		}
	}

	return 0;
}

int f1(int turns, int* throw_results) {
	for (int i = 0; i < turns; i++) {
		throw_results[rand() % EYES]++;
	}

	return 0;
}
