#pragma once
#ifndef RIDEREQUEST_H
#define RIDEREQUEST_H
#include <iostream>
#include <string>

class RideRequest {
	int rideID;
	int passengerID;
	int driverID;
	std::string pickup;
	std::string dropoff;
	std::string ridestatus;
	double fare;

public:
	void setRideid(int rideID);
	void setPassengerID(int passengerID);
	void setDriverID(int driverID);
	void setPickup(std::string pickup);
	void setdropoff(std::string dropoff);
	void setRidestatus(std::string ridestatus);
	void setFare(double fare);

	int getRideid();
	int getPassengerID();
	int getDriverID();
	std::string getPickup();
	std::string getDropoff();
	std::string getRidestatus();
	double getRidefare();
};

#endif RIDEREQUEST_H
