#include <iostream>
#include "Account.hpp"

using namespace std;

int main() {
	Account myAccount{"Ewout", 2000};

	cout << myAccount.getName() << ": " << myAccount.getBalance() << endl;

	return 0;
}
