#include "Vehicle.h"
#include <iostream>
using namespace std; 

class Vehicle {

	int id; 
	string name; 
	string numberplate; 
	string model; 
	string colour; 

public:
	void setVehicleid(int id) {
		this->id = id; 
	}
	void setVehiclename(string name) {
		this->name = name; 
	}
	void setVehiclenumberplate(string numberplate) {
		this->numberplate = numberplate; 
	}
	void setVehiclemodel(string model) {
		this->model = model; 
	}
	void setVehiclecolour(string colour) {
		this->colour = colour; 
	}


	int getVehicleid(int id) {
		return id; 
	}
	string getVehiclename(string name) {
		return name; 
	}
	string getVehiclenumberplate(string numberplate) {
		return numberplate; 
	}
	string getVehiclemodel(string model) {
		return model; 
	}
	string getVehiclecolour(string colour) {
		return colour; 
	}
};