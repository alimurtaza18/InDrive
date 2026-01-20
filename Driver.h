#pragma once
#include "Vehicle.h"
#include "RideRequest.h"
#include <iostream>
#include <string>
#ifndef DRIVER_H
#define DRIVER_H

class Driver {

    Vehicle vehicle; 
    RideRequest riderequest; 

    std::string name;
    int id;
    std::string email;
    std::string phonenumber;

public: 
    void setDrivername(std::string name); 
    void setDriverid(int id);
    void setDriveremail(std::string email);
    void setDriverphonenumber(std::string phonenumber);

    std::string getDrivername();
    int getDriverid();
    std::string getDriveremail();
    std::string getDriverphonenumber();
};

#endif DRIVER_H

