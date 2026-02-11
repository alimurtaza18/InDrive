#include "PassengerInfoIntake.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std; 

bool PassengerInfoIntake::at_count(std::string email) {
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

bool PassengerInfoIntake::at_position(std::string email) {
		if (email[0] == '@' || email[email.length() - 1] == '@') {
			return false;
		}
	return true; 
}

bool PassengerInfoIntake::dot_and_at_position(std::string email) {
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


bool PassengerInfoIntake::space_check(std::string email) {
	bool sc = true; 
	for (int i = 0; i < email.length(); i++) {
		if (email[i] == ' ') {
			sc = false; 
		}
	}
	return sc;
}

bool PassengerInfoIntake::isValidNumber(std::string number) {
	areAllDigits(number);
	if (number.length() != 11 || number.substr(0, 2) != "03" || !areAllDigits(number)) { 
		return false;
	}
	return true;
}

bool PassengerInfoIntake::areAllDigits(std::string number) {
	for (int i = 0; i < number.length(); i++) {
		if (!isdigit(number[i])) {
			return false;
		}
	}
	return true;
}

bool PassengerInfoIntake::isValidEmail(std::string email) {
	if (at_count(email) && at_position(email) && dot_and_at_position(email) && space_check(email)) {
		return true; 
	}
	return false; 
}

int PassengerInfoIntake::PassengerID() {
	ifstream file("Passenger.txt");
	string line;
	int lastID = 2000;

	while (getline(file, line)) {
		std::stringstream ss(line);
		string PassengerID;
		getline(ss, PassengerID, ',');
		if (PassengerID.empty()) continue;
		try {
			lastID = stoi(PassengerID);
		}
		catch (const std::exception& e) {
			cout << "Invalid Id" << endl;
		
		}
	}
	return lastID+1;
}


	void PassengerInfoIntake :: passengerUserAccount() {
		string name, phonenumber, email, userID;  
		int passenger_id; 
		bool valid_number = false;
		bool valid_email = false;

		cout << "--------User's Account Registration-------" << endl;
		cout << "Enter your name: ";
		cin.ignore(); 
		getline(cin, name);

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		while (!valid_number) {
		cout << "Enter phone number: " << endl;
		getline(cin, phonenumber);

		if(cin.fail()){
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
		}while (!valid_email); 

		passenger_id = PassengerID();

		ofstream Passengerfile("Passenger.txt", ios::app);
		if (Passengerfile.is_open()) {
			Passengerfile << passenger_id <<"," << name << "," << phonenumber << "," << email << endl;
		}
		else {
			cout << "File can't be opened." << endl;
		}
}

	
	