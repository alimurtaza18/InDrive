#include "RideRequest.h"
#include <iostream>
using namespace std; 

	void RideRequest::setRideid(int rideID) {
		this->rideID;
	}
	void RideRequest::setPassengerID(int passengerID) {
		this->passengerID = passengerID; 
	}
	void RideRequest::setDriverID(int driverID) {
		this->driverID = driverID; 
	}
	void RideRequest::setPickup(string pickup) {
		this->pickup = pickup; 
	}
	void RideRequest::setdropoff(string dropoff) {
		this->dropoff = dropoff; 
	}
	void RideRequest::setRidestatus(string ridestatus) {
		this->ridestatus = ridestatus; 
	}
	void RideRequest::setFare(double fare) {
		this->fare = fare; 
	}

	int RideRequest::getRideid() {
		return rideID; 
	}
	int RideRequest::getPassengerID() {
		return passengerID; 
	}
	int RideRequest::getDriverID() {
		return driverID; 
	}
	string RideRequest::getPickup() {
		return pickup; 
	}
	string RideRequest::getDropoff() {
		return dropoff; 
	}
	string RideRequest::getRidestatus() {
		return ridestatus; 
	}
	double RideRequest::getRidefare() {
		return fare; 
	}