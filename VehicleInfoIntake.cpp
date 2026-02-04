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
		try {
			lastID = stoi(VehicleID);
		}
		catch (const std::exception& e) {
			cout << "Invalid Id." << " | Reason: " << e.what() << endl;
		}
	}
	return lastID;
}

void VehicleInfoIntake::RegisterVehicle() {
	string vehicle_name, vehicle_plate, vehicle_colour; 
	int vehicle_model; 

	cout << "Enter Vehicle name: "; 
	cin.ignore(); 
	getline(cin, vehicle_name); 

	cout << "Enter your vehicle number plate: "; 
	cin.ignore();
	getline(cin, vehicle_plate); 

	cout << "Enter Vehicle model number: "; 
	cin >> vehicle_model; 

	cout << "Enter Vehicle colour: "; 
	cin.ignore();
	getline(cin, vehicle_colour); 

	int vehicle_id = VehicleID();

	ofstream Vehiclefile("Vehicle.txt", ios::app);
	if (Vehiclefile.is_open()) {
		Vehiclefile << vehicle_id <<"," << vehicle_name << "," << vehicle_plate << "," << vehicle_model << "," << vehicle_colour << endl;
	}
	else {
		cout << "File can't be opened." << endl;
	}
}