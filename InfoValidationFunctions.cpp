#include "InfoValidationFunctions.h"
#include <iostream>
#include <fstream>
#include <string>

bool InfoValidationFunctions::at_count(std::string email) {
	int count = 0;
	for (int i = 0; i < email.length(); i++) {
		if (email[i] == '@') {
			count++;
		}
	}
	if (count != 1) {
		return false;
	}
	return true;
}

bool InfoValidationFunctions::at_position(std::string email) {
	if (email[0] == '@' || email[email.length() - 1] == '@') {
		return false;
	}
	return true;
}

bool InfoValidationFunctions::dot_and_at_position(std::string email) {
	int dot_ind = -1;
	int at_ind = -1;
	for (int i = 0; i < email.length(); i++) {
		if (email[i] == '.') {
			dot_ind = i;
		}
		if (email[i] == '@') {
			at_ind = i;
		}
	}
	if (dot_ind <= at_ind) {
		return false;
	}
	return true;
}


bool InfoValidationFunctions::space_check(std::string email) {
	bool sc = true;
	for (int i = 0; i < email.length(); i++) {
		if (email[i] == ' ') {
			sc = false;
		}
	}
	return sc;
}

bool InfoValidationFunctions::isValidNumber(std::string number) {
	areAllDigits(number);
	if (number.length() != 11 || number.substr(0, 2) != "03" || !areAllDigits(number)) {
		return false;
	}
	return true;
}

bool InfoValidationFunctions::areAllDigits(std::string number) {
	for (int i = 0; i < number.length(); i++) {
		if (!isdigit(number[i])) {
			return false;
		}
	}
	return true;
}

bool InfoValidationFunctions::isValidEmail(std::string email) {
	if (at_count(email) && at_position(email) && dot_and_at_position(email) && space_check(email)) {
		return true;
	}
	return false;
}
