#include <iostream>
#include "Signin.h"
#include "DriverInfoIntake.h"
#include "PassengerInfoIntake.h"
#include "VehicleInfoIntake.h"
using namespace std; 

void Sign_in::sign_in() {
	VehicleInfoIntake vinfo;
	int  user = 0;
	int  user2 = 0; 
	cout << "Press 1 for Driver, 2 for Passenger." << endl;
	cin >> user;

	if (user == 1) {
		DriverInfoIntake dinfo;
		dinfo.DriverUserAccount();
		cout << "Press 3 to continue for vehicle registration. " << endl;
		cin >> user2;
		if (user2 == 3) {
			vinfo.RegisterVehicle();
		}
		else {
			cout << "Invalid Input." << endl;
		}
	}
	else if (user == 2) {
		PassengerInfoIntake pinfo;
		pinfo.passengerUserAccount();
	}
}