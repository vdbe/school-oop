#pragma once
#include <array>
#include <string>

class Student {
	public:
		std::string name;
		void fillData(void);
		float avg(void);

	private:
		std::array<int, 3> coursePoints;
};
