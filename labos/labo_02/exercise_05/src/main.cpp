#include <iostream>

#include "user.hpp"

User get_user(void);

int main() {
	std::cout << "Enter user_01" << std::endl;
	User user_01 = get_user();

	std::cout << "Enter user_02" << std::endl;
	User user_02 = get_user();

	user_01.show();
	user_02.show();

	return 0;
}

User get_user() {
	User user;
	std::string s;
	int birthyear;

	std::cout << "Firstname: ";
	std::cin >> s;
	user.setFirstname(s);

	std::cout << "Lastname: ";
	std::cin >> s;
	user.setLastname(s);

	std::cout << "Address: ";
	std::cin >> s;
	user.setAddress(s);

	std::cout << "Email: ";
	std::cin >> s;
	user.setEmail(s);

	std::cout << "Birthyear: ";
	std::cin >> birthyear;
	user.setBirthyear(birthyear);

	return user;
}
