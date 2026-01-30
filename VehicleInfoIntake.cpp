#include "VehicleInfoIntake.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
using namespace std; 

int VehicleInfoIntake::VehicleID() {
	ifstream file("Vehicle.txt");
	string line;
	int lastID = 1000;

	while (getline(file, line)) {
		std::stringstream ss(line);
		string VehicleID;
		getline(ss, VehicleID, ',');
		lastID = stoi(VehicleID);
	}
	return lastID;
}

void VehicleInfoIntake::RegisterVehicle() {
	string vehicle_name, vehicle_plate, vehicle_colour; 
	int vehicle_id = VehicleID();
	int vehicle_model; 

	cout << "Enter Vehicle name: "; 
	getline(cin, vehicle_name); 

	cout << "Enter your vehicle number plate: "; 
	getline(cin, vehicle_plate); 

	cout << "Enter Vehicle model number: "; 
	cin >> vehicle_model; 

	cout << "Enter Vehicle colour: "; 
	getline(cin, vehicle_colour); 

	ofstream Vehiclefile("Vehicle.txt", ios::app);
	if (Vehiclefile.is_open()) {
		Vehiclefile << vehicle_id <<"," << vehicle_name << "," << vehicle_plate << "," << vehicle_model << "," << vehicle_colour << endl;
	}

}