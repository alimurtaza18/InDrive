#include "DriverInfoIntake.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

bool DriverInfoIntake::at_count(std::string email) {
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

bool DriverInfoIntake::at_position(std::string email) {
	if (email[0] == '@' || email[email.length() - 1] == '@') {
		return false;
	}
	return true;
}

bool DriverInfoIntake::dot_and_at_position(std::string email) {
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


bool DriverInfoIntake::space_check(std::string email) {
	bool sc = true;
	for (int i = 0; i < email.length(); i++) {
		if (email[i] == ' ') {
			sc = false;
		}
	}
	return sc;
}

bool DriverInfoIntake::isValidNumber(std::string number) {
	areAllDigits(number);
	if (number.length() != 11 || number.substr(0, 2) != "03" || !areAllDigits(number)) {
		return false;
	}
	return true;
}

bool DriverInfoIntake::areAllDigits(std::string number) {
	for (int i = 0; i < number.length(); i++) {
		if (!isdigit(number[i])) {
			return false;
		}
	}
	return true;
}

bool DriverInfoIntake::isValidEmail(std::string email) {
	if (at_count(email) && at_position(email) && dot_and_at_position(email) && space_check(email)) {
		return true;
	}
	return false;
}

int DriverInfoIntake::DriverID() {
	ifstream file("Driver.txt"); 
	string line; 
	int lastID = 1000; 

	while (getline(file, line)) {
		std::stringstream ss(line); 
		string DriverID; 
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		getline(ss, DriverID, ',');
		cout << "Value going to stoi is [" << DriverID << "]" << endl; 
		try {
			lastID = stoi(DriverID);
		}
		catch (const std::exception& e) {
			cout << "Invalid Id." <<" | Reason: " <<e.what()<< endl;
		}
	}
	return lastID+1; 
}

void DriverInfoIntake::DriverUserAccount() {
	string name, phonenumber, email, userID;
	bool valid_number = false;
	bool valid_email = false;
	int driver_id;

	cout << "--------User's Account Registration-------" << endl;
	cout << "Enter your name: ";
	cin.ignore();
	getline(cin, name);

	cout << endl; 

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	while (!valid_number) {
		cout << "Enter phone number: " << endl;
		getline(cin, phonenumber);

		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid Input, please try again" << endl;
			continue;
		}
		valid_number = isValidNumber(phonenumber);
		if (valid_number == false) {
			cout << "Invalid input, please try again." << endl;
		}
	}

	do {
		cout << "Enter email address: " << endl;
		cin >> email;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid Input, please try again" << endl;
			continue;
		}
		valid_email = isValidEmail(email);
		if (valid_email == false) {
			cout << "Invalid email, please try again." << endl;
		}
	} while (!valid_email);

	driver_id = DriverID(); 

	ofstream Driverfile("Driver.txt", ios::app);
	if (Driverfile.is_open()) {
		Driverfile << driver_id << "," << name << "," << phonenumber << "," << email << endl;
	}
	else {
		cout << "File can't be opened." << endl;
	}
}

