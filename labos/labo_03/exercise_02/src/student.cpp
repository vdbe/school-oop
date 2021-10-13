#pragma once
#include <iostream>
#include <numeric>

#include "student.hpp"

void Student::fillData(void) {
	std::string s;
	std::cout << "Name: ";
	std::cin >> s;

	this->name = s;


	int temp;
	for (int &e : this->coursePoints) {
		std::cout << "Points: ";
		std::cin >> temp;
		e = temp;
	}
}


float Student::avg(void)
{
	int sum = 0;
	for (int e: this->coursePoints) {
		sum += e;
	}

	return (float)sum / 3;
}
