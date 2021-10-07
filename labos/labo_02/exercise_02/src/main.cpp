#include <iostream>
#include <cstdlib>

#define EYES 6
#define TURNS 6000

int main() {
	int throw_results[EYES] = { 0 };

	srand(time(NULL));

	for (int i = 0; i < TURNS; i++) {
		throw_results[rand() % EYES]++;
	}

	for(int i = 0; i < EYES; i++) {
		std::cout << i + 1 << ": " << throw_results[i] << std::endl;
	}

	return 0;
}
