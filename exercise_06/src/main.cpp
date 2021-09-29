#include <iostream>

int f1() {
	static int a = 0;
	return a++;
}

int f2() {
	int a = 0;
	return a++;
}

int main() {
	for (int i = 0; i < 5; i++) {
		std::cout << f1() << ", " << f2() << std::endl;
	}

	return 0;
}
