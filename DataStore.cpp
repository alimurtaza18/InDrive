#include "DataStore.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

class DataStore {

public:
	void registerUserAccount() {
		string name, phonenumber, email, userID;
		bool numberresult = isValidNumber;
		bool emailresult = isValidEmail; 


		cout << "--------User's Account Registration-------" << endl;
		cout << "Enter your name: " << endl;
		cin >> name;

		while (numberresult != true) {
		cout << "Enter phone number: " << endl;
		cin >> phonenumber;
		isValidNumber(phonenumber); 
			cout << "Invalid phone number " << endl; 
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

	bool isValidNumber(string number) {
		areAllDigits(number); 
		bool result = areAllDigits;
		if (number.length() != 11 || number.substr(0,2) == "03" || result==true) {
			cout << "Inavlid Number" << endl; 
			return false; 
		}
		return true; 
	}

	bool areAllDigits(string number) {
		for (int i = 0; i < number.length(); i++) {
			if (!isdigit(number[i])) {
				return false; 
			}
		}
		return true; 
	}

	bool isValidEmail(string email) {
		int count = 0; 
		bool result; 
		int dotind, atind; 
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
				dotind = i; 
			}
			else if (email[i] == '@') {
				atind == i; 
			}
			if (dotind <= atind) {
				return false; 
			}
			if (email[i] == ' ') {
				return false; 
			}
		} 
		return true; 
	}
};