#include "Driver.h"
#include "Vehicle.h"
#include<iostream>
using namespace std; 

class Driver {

    Vehicle vehicle; 

    string name;
    int id;
    string email;
    string phonenumber;
    
    
public: 
    void setDrivername(string name) {
        this->name = name; 
    }
    void setDriverid(int id) {
        this->id = id; 
    }
    void setDriveremail(string email) {
        this->email = email; 
    }
    void setDriverphonenumber(string phonenumber) {
        this->phonenumber = phonenumber; 
    }

    string getDrivername() {
        return name; 
    }
    int getDriverid() {
        return id; 
    }
    string getDriveremail() {
        return email; 
    }
    string getDriverphonenumber() {
        return phonenumber; 
    }
};

