#include "Driver.h"
#include "Vehicle.h"
#include "RideRequest.h"
#include<iostream>
using namespace std; 

    void Driver::setDrivername(string name) {
        this->name = name; 
    }
    void Driver::setDriverid(int id) {
        this->id = id; 
    }
    void Driver::setDriveremail(string email) {
        this->email = email; 
    }
    void Driver::setDriverphonenumber(string phonenumber) {
        this->phonenumber = phonenumber; 
    }

    string Driver::getDrivername() {
        return name; 
    }
    int Driver::getDriverid() {
        return id; 
    }
    string Driver::getDriveremail() {
        return email; 
    }
    string Driver::getDriverphonenumber() {
        return phonenumber; 
    }


