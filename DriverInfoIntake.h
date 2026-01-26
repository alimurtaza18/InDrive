#pragma once
#ifndef DriverInfoIntake_H
#define DriverInfoIntake_H
#include <iostream>
#include <string>

class DriverInfoIntake {
public:
	bool at_count(std::string email);

	bool at_position(std::string email);

	bool dot_and_at_position(std::string email);

	bool space_check(std::string email);

	bool isValidNumber(std::string number);

	bool areAllDigits(std::string number);

	bool isValidEmail(std::string email);

	int DriverID(int id); 

	void registerUserAccount();
};

#endif DriverInfoIntake_H
