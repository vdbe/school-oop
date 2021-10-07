#include <string>
#include <iostream>

#include "user.hpp"

void User::setFirstname(std::string firstname) {
	this->firstname = firstname;
}

std::string User::getFirstname() {
	return this->firstname;
}

void User::setLastname(std::string lastname) {
	this->lastname = lastname;
}

std::string User::getLastname() {
	return this->lastname;
}

void User::setBirthyear(int birthyear) {
	this->birthyear = birthyear;
}

int User::getBirthyear() {
	return this->birthyear;
}

int User::calcAge() {
	int current_time = time(NULL);
	int current_year = 1970 + current_time / 31537970;
	int age = current_year - this->birthyear;
	return age;
}

std::string User::getAddress() {
	return this->address = address;
}

void User::setAddress(std::string address) {
	this->address = address;
}

void User::setEmail(std::string email) {
	this->email = email;
}

std::string User::getEmail() {
	return this->email;
}

void User::show() {
	std::cout << this->firstname << " " << this->lastname << " with email " << this->email << " is " << this->calcAge() << "years old and living at " << this->address << std::endl;
}
