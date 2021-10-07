#pragma once

class User {
	public:
		std::string getFirstname(void);
		void setFirstname(std::string);

		std::string getLastname(void);
		void setLastname(std::string);

		std::string getAddress(void);
		void setAddress(std::string);

		std::string getEmail(void);
		void setEmail(std::string);

		int getBirthyear(void);
		void setBirthyear(int);

		int calcAge(void);
		void show(void);


	private:
		std::string firstname;
		std::string lastname;
		std::string address;
		std::string email;
		int birthyear;
};
