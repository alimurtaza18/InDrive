#include "Passengers.h"
#include "RideRequest.h"
#include <iostream>
using namespace std; 

class Passenger {

    string name; 
    int id; 
    string email; 
    string phonenumber; 
    string pickup; 
    string dropoff; 
    RideRequest riderequest; 

public: 
    
    void setPassengersname(string name) {
        this->name = name; 
    }
    void setPassengersid(int id) {
        this->id = id;
    }
    void setPassengersemail(string email) {
        this->email = email;
    }
    void setPassengersphonenumber(string phonenumber) {
        this->phonenumber = phonenumber;
    }
    void setPassengerspickup(string pickup) {
        this->pickup = pickup;
    }
    void setPassengersdropoff(string dropoff) {
        this->dropoff = dropoff;
    }
       
    string getPassengersname(string name){
        return name; 
    }
    int getPassengersid(int id) {
        return id;
    }
    string getPassengersemail(string email) {
        return email;
    }
    string getPassengersphonenumber(string phonenumber) {
        return phonenumber;
    }
    string getPassengerspickup(string pickup) {
        return pickup;
    }
    string getPassengersdropoff(string dropoff) {
        return dropoff;
    }
  

};