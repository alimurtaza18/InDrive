#include "DriverInfoIntake.h"
#include "PassengerInfoIntake.h"
#include <iostream>
using namespace std; 

int main() {
	DriverInfoIntake dinfo; 
	dinfo.registerUserAccount(); 

	PassengerInfoIntake pinfo;
	pinfo.registerUserAccount(); 
}