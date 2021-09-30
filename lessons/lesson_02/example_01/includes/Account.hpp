#pragma once
#include <string>


class Account {
	public:
	Account(std::string accountName, int initialBalance)
		: name{accountName}
	{
		balance = initialBalance;
	}

	void setName(std::string accountName)
	{
		name = accountName;
	}

	std::string getName()
	{
		return name;
	}

	int getBalance()
	{
		return balance;
	}

	private:
		std::string name;
		int balance{0};
};
