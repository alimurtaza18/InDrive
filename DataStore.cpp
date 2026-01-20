#include "DataStore.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std; 
 
	void DataStore :: registerUserAccount() {
		string name, phonenumber, email, userID;

		bool numberresult = isValidNumber(phonenumber);
		bool emailresult = isValidEmail(email);


		cout << "--------User's Account Registration-------" << endl;
		cout << "Enter your name: " << endl;
		cin >> name;

		while (numberresult != true) {
		cout << "Enter phone number: " << endl;
		cin >> phonenumber;
		isValidNumber(phonenumber); 
		}

		while (emailresult != true) {
			cout << "Enter email address: " << endl;
			cin >> email;
			isValidEmail(email); 
		}

		ofstream Passengerfile("Passenger.txt", ios::app);
		if (Passengerfile.is_open()) {
			Passengerfile << name << " " << phonenumber << " " << email << endl;
		}
		else {
			cout << "File can't be opened." << endl;
		}
}

	bool DataStore::isValidNumber(std::string number) {
		areAllDigits(number); 
		bool result = areAllDigits(number);
		if (number.length() != 11 || number.substr(0,2) == "03" || result==true) {
			cout << "Invalid Number" << endl; 
			return false; 
		}
		return true; 
	}

	bool DataStore::areAllDigits(std::string number) {
		for (int i = 0; i < number.length(); i++) {
			if (!isdigit(number[i])) {
				return false; 
			}
		}
		return true; 
	}

	bool DataStore :: isValidEmail(std::string email) {
		int count = 0; 
		bool result; 
		int dot_ind;
		int at_ind; 

		for (int i = 0; i < email.length(); i++) {
			if (email[i] == '@') {
				count++; 
			}
			if (count != 1) {
				result = false; 
			}
			if (email[0] == '@' || email[email.length() - 1] == '@') {
				result = false; 
			}
			if (email[i] == '.') {
				 dot_ind = i; 
			}
			else if (email[i] == '@') {
				 at_ind = i; 
			}
			if (dot_ind <= at_ind) {
				return false; 
			}
			if (email[i] == ' ') {
				return false; 
			}
		} 
		return true; 
	}
