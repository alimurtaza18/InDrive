#include "DriverInfoIntake.h"
#include "VehicleInfoIntake.h"
#include "PassengerInfoIntake.h"
#include <iostream>
using namespace std; 

int main() {
	VehicleInfoIntake vinfo; 
	int  user=0;
	int user2 = 0; 

	cout << "****Wellcome to the Application****" << endl; 
	cout << "Press 6 to Login if you already have an account, Press 7 to Sign in. " << endl; 


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