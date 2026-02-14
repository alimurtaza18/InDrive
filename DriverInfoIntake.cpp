#include "DriverInfoIntake.h"
#include "InfoValidationFunctions.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

int DriverInfoIntake::DriverID() {
	ifstream file("Driver.txt");
	string line;
	int lastID = 1000;

	while (getline(file, line)) {
		std::stringstream ss(line);
		string DriverID;
		getline(ss, DriverID, ',');
		if (DriverID.empty()) continue;
		try {
			lastID = stoi(DriverID);
		}
		catch (const std::exception& e) {
			cout << "Invalid Id" << endl;
		}
	}
	return lastID + 1;
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

