#include "DataStore.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std; 

bool DataStore::at_count(std::string email) {
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

bool DataStore::at_position(std::string email) {
		if (email[0] == '@' || email[email.length() - 1] == '@') {
			return false;
		}
	return true; 
}

bool DataStore::dot_and_at_position(std::string email) {
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


bool DataStore::space_check(std::string email) {
	bool sc = true; 
	for (int i = 0; i < email.length(); i++) {
		if (email[i] == ' ') {
			sc = false; 
		}
	}
	return sc;
}

bool DataStore::isValidNumber(std::string number) {
	areAllDigits(number);
	if (number.length() != 11 || number.substr(0, 2) != "03" || !areAllDigits(number)) { 
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

bool DataStore::isValidEmail(std::string email) {
	if (at_count(email) && at_position(email) && dot_and_at_position(email) && space_check(email)) {
		return true; 
	}
	return false; 
}


	void DataStore :: registerUserAccount() {
		string name, phonenumber, email, userID;  
		bool valid_number = false;
		bool valid_email = false;

		cout << "--------User's Account Registration-------" << endl;
		cout << "Enter your name: ";
		cin >> name;

		do {
		cout << "Enter phone number: " << endl;
		cin >> phonenumber;
		
		cin.clear(); 
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		if(cin.fail()){
			cin.clear(); 
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid Input, please try again" << endl; 
			continue; 
		}

		valid_number = isValidNumber(phonenumber); 
		}while (!valid_number);

		do {
			cout << "Enter email address: " << endl;
			cin >> email;

			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

			if (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Invalid Input, please try again" << endl;
				continue;
			}

			valid_email = isValidEmail(email); 
		}while (!valid_email); 

		ofstream Passengerfile("Passenger.txt", ios::app);
		if (Passengerfile.is_open()) {
			Passengerfile << name << " " << phonenumber << " " << email << endl;
		}
		else {
			cout << "File can't be opened." << endl;
		}
}

	