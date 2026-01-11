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

    void setPassengersname(string name); 
    void setPassengersid(int id); 
};

#endif Passengers_H