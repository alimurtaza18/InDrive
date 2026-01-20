#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>

class Vehicle {
	int id;
	std::string name;
	std::string numberplate;
	std::string model;
	std::string colour;

public: 
	void setVehicleid(int id);
	void setVehiclename(std:: string name);
	void setVehiclenumberplate(std::string numberplate);
	void setVehiclemodel(std::string model);
	void setVehiclecolour(std::string colour);

	int getVehicleid(int id);
	std::string getVehiclename(std::string name);
	std::string getVehiclenumberplate(std::string numberplate);
	std::string getVehiclemodel(std::string model);
	std::string getVehiclecolour(std::string colour);
};



#endif VEHICLE_H