#include <iostream>
#include <vector>
#include <array>
#include <numeric>
#include <bits/stdc++.h>

int f1(std::vector<int>&);
int f2(std::vector<int>&);
int f3(std::vector<int>&);
int f4(std::vector<int>&);
int f5(std::vector<int>&);

int main() {
	std::vector<int> v;
	int temp = 1;
	do {
		switch(temp) {
			case 1:
				f1(v);
				break;
			case 2:
				f2(v);
				break;
			case 3:
				f3(v);
				break;
			case 4:
				f4(v);
				break;
			case 5:
				f5(v);
				break;
		}

		std::cout << "1. Getallenlijst inlezen (enkel positieve getallen)" << std::endl;
		std::cout << "2. Even getallen en oneven getallen apart weergeven)" << std::endl;
		std::cout << "3. Gemiddelde bereken" << std::endl;
		std::cout << "4. Som berekenen" << std::endl;
		std::cout << "5. Sorteren van groot naar klein of van klein naar groot" << std::endl;
		std::cout << "6. Vermenigvuldigen van lijst met zelfde getal" << std::endl;
		std::cout << "7. Sluiten" << std::endl;
		std::cout << "Option: ";
		std::cin >> temp;
	} while(temp != 7);


}

int f1(std::vector<int>& v) {
	int temp;

	std::cout << "Number: ";
	std::cin >> temp;
	while (temp >= 0) {
		v.push_back(temp);
		std::cout << "Number: ";
		std::cin >> temp;
	}

	return 0;
}

int f2(std::vector<int>& v) {
	std::array<std::vector<int>, 2> arr;

	for (int & element : v) {
		arr[element % 2].push_back(element);
	}

	std::cout << "Even: ";
	for (int & element : arr[0]) {
		std::cout << " " << element;
	}
	std::cout << std::endl;

	std::cout << "Uneven: ";
	for (int & element : arr[1]) {
		std::cout << " " << element;
	}
	std::cout << std::endl;

	return 0;
}


int f3(std::vector<int>& v) {
	int sum_of_elems = std::accumulate(v.begin(), v.end(), 0);

	std::cout << "Average: " << (float)sum_of_elems / v.size() << std::endl;

	return 0;
}

int f4(std::vector<int>& v) {
	int sum_of_elems = std::accumulate(v.begin(), v.end(), 0);

	std::cout << "Sun: " << sum_of_elems << std::endl;

	return 0;
}

int f5(std::vector<int>& v) {
	std::cout << "Sorted: " << std::endl;
	std::sort(v.begin(), v.end());

	int temp;

	std::cout << "1. normal, 2. reverse: ";
	std::cin >> temp;

	if (temp == 1) {
		for (int & element : v) {
			std::cout << element << std::endl;
		}
	} else {
		for (int ii = v.size(); ii >= 0; ii--) {
			std::cout << v[ii] << std::endl;
		}
	}

	return 0;
}

int f6(std::vector<int>& v) {
	int temp;

	std::cout << "Number: ";
	std::cin >> temp;

	for (int & element : v) {
		std::cout << element * temp << std::endl;
	}

	return 0;
}
