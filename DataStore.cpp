#include "DataStore.h"
#include <iostream>
#include <fstream>
using namespace std; 

class DataStore {

public:
	void registerUserAccount() {
		string name, phonenumber, email, userID;


		cout << "--------User's Account Registration-------" << endl;
		cout << "Enter your name: " << endl;
		cin >> name;

		cout << "Enter phone number: " << endl;
		cin >> phonenumber;
		numberValidation(phonenumber); 
		bool result = numberValidation; 
		if (result == false) {
			cout << "Invalid phone number " << endl; 
			return; 
		}

		cout << "Enter email address: " << endl;
		cin >> email;

		ofstream namefile("Person.txt", ios::app);
		if (namefile.is_open()) {
			namefile << name << endl;
		}
		else {
			cout << "File can't be opened." << endl;
		}
}

	bool numberValidation(string number) {
		allDigitsCheck(number); 
		bool result = allDigitsCheck;
		if (number.length() != 11 || number.substr(0,2) == "03" || result==true) {
			cout << "Inavlid Number" << endl; 
			return false; 
		}
		return true; 
	}

	bool allDigitsCheck(string number) {
		for (int i = 0; i < number.length(); i++) {
			if (!isdigit(number[i])) {
				return false; 
			}
		}
		return true; 
	}

};