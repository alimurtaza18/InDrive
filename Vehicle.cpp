#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std; 


	void Vehicle::setVehicleid(int id) {
		this->id = id; 
	}
	void Vehicle::setVehiclename(string name) {
		this->name = name; 
	}
	void Vehicle::setVehiclenumberplate(string numberplate) {
		this->numberplate = numberplate; 
	}
	void Vehicle::setVehiclemodel(string model) {
		this->model = model; 
	}
	void Vehicle::setVehiclecolour(string colour) {
		this->colour = colour; 
	}


	int Vehicle::getVehicleid(int id) {
		return id; 
	}
	string Vehicle::getVehiclename(string name) {
		return name; 
	}
	string Vehicle::getVehiclenumberplate(string numberplate) {
		return numberplate; 
	}
	string Vehicle::getVehiclemodel(string model) {
		return model; 
	}
	string Vehicle::getVehiclecolour(string colour) {
		return colour; 
	}
