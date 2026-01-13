#pragma once
#ifndef Passengers_H
#define Passengers_H
#include <iostream>

class Passenger {
    string name;
    int id;
    string email;
    string phonenumber;
    string pickup;
    string dropoff;
    RideRequest riderequest; 

public:
    void setPassengersname(string name); 
    void setPassengersid(int id); 
    void setPassengersemail(string email);
    void setPassengersphonenumber(string phonenumber);
    void setPassengerspickup(string pickup);
    void setPassengersdropoff(string dropoff);

    string getPassengersname(string name); 
    int getPassengersid(int id);
    string getPassengersemail(string email);
    string getPassengersphonenumber(string phonenumber);
    string getPassengerspickup(string pickup);
    string getPassengersdropoff(string dropoff);

};

#endif Passengers_H