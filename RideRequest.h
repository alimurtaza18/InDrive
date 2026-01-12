#pragma once
#ifndef RIDEREQUEST_H
#define RIDEREQUEST_H

class RideRequest {
	int rideID;
	int passengerID;
	int driverID;
	string pickup;
	string dropoff;
	string ridestatus;
	double fare;

public:
	void setRideid(int rideID);
	void setPassengerID(int passengerID);
	void setDriverID(int driverID);
	void setPickup(string pickup);
	void setdropoff(string dropoff);
	void setRidestatus(string ridestatus);
	void setFare(double fare);

	int getRideid();
	int getPassengerID();
	int getDriverID();
	string getPickup();
	string getDropoff();
	string getRidestatus();
	double getRidefare();
};

#endif RIDEREQUEST_H
