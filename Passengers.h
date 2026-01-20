#pragma once
#include "RideRequest.h"
#ifndef Passengers_H
#define Passengers_H
#include <iostream>
#include <string>

class Passenger {
    std::string name;
    int id;
    std::string email;
    std::string phonenumber;
    std::string pickup;
    std::string dropoff;
    RideRequest riderequest; 

public:
    void setPassengersname(std::string name); 
    void setPassengersid(int id); 
    void setPassengersemail(std::string email);
    void setPassengersphonenumber(std::string phonenumber);
    void setPassengerspickup(std::string pickup);
    void setPassengersdropoff(std::string dropoff);

    std::string getPassengersname(std::string name); 
    int getPassengersid(int id);
    std::string getPassengersemail(std::string email);
    std::string getPassengersphonenumber(std::string phonenumber);
    std::string getPassengerspickup(std::string pickup);
    std::string getPassengersdropoff(std::string dropoff);

};

#endif Passengers_H