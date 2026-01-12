#include "RideRequest.h"
#include <iostream>
using namespace std; 

class RideRequest {

	int rideID; 
	int passengerID; 
	int driverID; 
	string pickup; 
	string dropoff; 
	string ridestatus; 
	double fare; 

public: 
	void setRideid(int rideID) {
		this->rideID;
	}
	void setPassengerID(int passengerID) {
		this->passengerID = passengerID; 
	}
	void setDriverID(int driverID) {
		this->driverID = driverID; 
	}
	void setPickup(string pickup) {
		this->pickup = pickup; 
	}
	void setdropoff(string dropoff) {
		this->dropoff = dropoff; 
	}
	void setRidestatus(string ridestatus) {
		this->ridestatus = ridestatus; 
	}
	void setFare(double fare) {
		this->fare = fare; 
	}

	int getRideid() {
		return rideID; 
	}
	int getPassengerID() {
		return passengerID; 
	}
	int getDriverID() {
		return driverID; 
	}
	string getPickup() {
		return pickup; 
	}
	string getDropoff() {
		return dropoff; 
	}
	string getRidestatus() {
		return ridestatus; 
	}
	double getRidefare() {
		return fare; 
	}
};