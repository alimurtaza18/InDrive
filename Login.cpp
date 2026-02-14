#include "Login.h"
#include "Signin.h"
#include <iostream>
#include <string>
using namespace std; 

void Login::login_check() {
	Sign_in s_in;
	int intake; 
	cout << "Press 1 to sign up, Press 2 to Login if you are new" << endl; 
	cin >> intake; 
	if (intake == 1) {
		s_in.sign_in(); 
	}
	else if (intake == 2) {
		int choice; 
		cout << "Press 1 if registered as Driver, 2 if registered as Passenger: " << endl; 
		cin >> choice; 
		if (choice == 1) {
			cout << 
		}
	}
}