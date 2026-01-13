#pragma once
#ifndef DRIVER_H
#define DRIVER_H

class Driver {

    Vehicle vehicle; 
    RideRequest riderequest; 

    string name;
    int id;
    string email;
    string phonenumber;

public: 
    void setDrivername(string name); 
    void setDriverid(int id);
    void setDriveremail(string email);
    void setDriverphonenumber(string phonenumber);

    string getDrivername();
    int getDriverid();
    string getDriveremail();
    string getDriverphonenumber();
};

#endif DRIVER_H

