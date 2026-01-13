#include "DataStore.h"
#include <iostream>
#include <fstream>
using namespace std; 

class DataStore {

	void registerUserAccount() {
		string name, phonenumber, email, userID; 
		cout << "--------User's Account Registration-------" << endl; 
		cout << "Enter your name: " << endl;
		cin >> name;
		cout << "Enter phone number: " << endl; 
		cin >> phonenumber; 
		cout << "Enter email address: " << endl; 
		cin >> email; 
		
	}

	void writetoPersonFile() {
		ofstream file("Person.txt", ios::app); 
		if (file.is_open()) {

		}
	}

};