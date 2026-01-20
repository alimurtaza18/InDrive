#include "Passengers.h"
#include "RideRequest.h"
#include <iostream>
using namespace std; 

 
    void Passenger::setPassengersname(string name) {
        this->name = name; 
    }
    void Passenger::setPassengersid(int id) {
        this->id = id;
    }
    void Passenger::setPassengersemail(string email) {
        this->email = email;
    }
    void Passenger::setPassengersphonenumber(string phonenumber) {
        this->phonenumber = phonenumber;
    }
    void Passenger::setPassengerspickup(string pickup) {
        this->pickup = pickup;
    }
    void Passenger::setPassengersdropoff(string dropoff) {
        this->dropoff = dropoff;
    }
       
    string Passenger::getPassengersname(string name){
        return name; 
    }
    int Passenger::getPassengersid(int id) {
        return id;
    }
    string Passenger::getPassengersemail(string email) {
        return email;
    }
    string Passenger::getPassengersphonenumber(string phonenumber) {
        return phonenumber;
    }
    string Passenger::getPassengerspickup(string pickup) {
        return pickup;
    }
    string Passenger::getPassengersdropoff(string dropoff) {
        return dropoff;
    }
  