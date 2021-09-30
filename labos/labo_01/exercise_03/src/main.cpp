#include <iostream>

int fac(int);

int main() {
	int number;
	std::string str;

	std::cout << "Enter a 4 digit number: ";
	std::cin >> number;

	str = std::to_string(number);

	for (int i = 0; i < str.length(); i++) {
		std::cout << str[i]<< "\t";
	}
	std::cout << std::endl;

	return 0;
}

int fac(int n) {
	int ret = 1;

	for (int i = 1; i <= n; i++) {
		ret *= i;
	}

	return ret;
}
