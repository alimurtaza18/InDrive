#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {
	int id;
	string name;
	string numberplate;
	string model;
	string colour;

public: 
	void setVehicleid(int id);
	void setVehiclename(string name);
	void setVehiclenumberplate(string numberplate);
	void setVehiclemodel(string model);
	void setVehiclecolour(string colour);

	int getVehicleid(int id);
	string getVehiclename(string name);
	string getVehiclenumberplate(string numberplate);
	string getVehiclemodel(string model);
	string getVehiclecolour(string colour);
};



#endif VEHICLE_H