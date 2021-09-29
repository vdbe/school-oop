#include <iostream>

int fac(int);

int main() {
    printf("Hello, world!");
    std::cout << fac(5) << std::endl;
    return 0;
}

int fac(int n) {
	int ret = 1;

	for (int i = 1; i <= n; i++) {
		ret *= i;
	}

	return ret;
}
