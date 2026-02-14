#pragma once
#ifndef InfoValidationFunctions_H
#define InfoValidationFunctions_H
#include <iostream>

class InfoValidationFunctions {
public: 
	bool at_count(std::string email);

	bool at_position(std::string email);

	bool dot_and_at_position(std::string email);

	bool space_check(std::string email);

	bool isValidNumber(std::string number);

	bool areAllDigits(std::string number);

	bool isValidEmail(std::string email);
};

#endif // !1
