#include "DriverInfoIntake.h"
#include "PassengerInfoIntake.h"
#include <iostream>
using namespace std; 

int main() {
	int  user; 
	cout << "****Wellcome to the Application****" << endl; 
	cout << "PRess 1 for Driver, to for Passenger." << endl; 
	cin >> user; 

	if (user == 1) {
		DriverInfoIntake dinfo;
		dinfo.registerUserAccount();
	}
	else if (user == 2) {
		PassengerInfoIntake pinfo;
		pinfo.registerUserAccount();
	}

}