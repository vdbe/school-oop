#include <iostream>
#include <vector>

#include "student.hpp"

int main() {
	std::vector<Student> students;
	int temp;
	float avg = 0;

	do {
		Student student;
		student.fillData();

		std::cout << "1. For another student: ";
		std::cin >> temp;

		students.push_back(student);
	} while (temp == 1);

	for (Student &student : students) {
		avg += student.avg();
	}

	avg /= students.size();

	for (Student &student : students) {
		if (student.avg() > avg) {
			std::cout << student.name << std::endl;
		}
	}

	return 0;
}

