#pragma once
#ifndef DATASTORE_H
#define DATASTORE_H
#include <iostream>
#include <string>

class DataStore {
public: 
	bool at_count(std::string email); 

	bool at_position(std::string email); 

	bool dot_and_at_position(std::string email); 

	bool space_check(std::string email);

	bool isValidNumber(std::string number);

	bool areAllDigits(std::string number);

	bool isValidEmail(std::string email);

	void registerUserAccount();
};

#endif DATASTORE_H
