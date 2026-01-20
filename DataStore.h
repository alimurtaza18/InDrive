#pragma once
#ifndef DATASTORE_H
#define DATASTORE_H
#include <iostream>
#include <string>

class DataStore {
public: 
	void registerUserAccount();

	bool isValidNumber(std::string number);

	bool areAllDigits(std::string number);

	bool isValidEmail(std::string email); 
};

#endif DATASTORE_H
