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
	cout << "PRess 1 for Driver, 2 for Passenger." << endl; 
	cin >> user; 

	if (user == 1) {
		DriverInfoIntake dinfo;
		dinfo.DriverUserAccount();
		cout << "Press 3 to continue for vehicle registration. " << endl; 
		if (user2 == 3) {
			vinfo.RegisterVehicle();
		}
	}
	else if (user == 2) {
		PassengerInfoIntake pinfo;
		pinfo.passengerUserAccount();
	}

}