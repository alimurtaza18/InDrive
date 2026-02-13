#include "Login.h"
#include "Signin.h"
#include <iostream>
#include <string>
using namespace std; 

void Login::login_check() {
	Sign_in s_in;
	int intake; 
	cout << "Press 1 to Login, Press 2 to sign up if you are new" << endl; 
	cin >> intake; 
	if (intake == 2) {
		s_in.sign_in(); 
	}
}