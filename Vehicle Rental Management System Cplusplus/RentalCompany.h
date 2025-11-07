#pragma once

#include "Vehicle.h"

class RentalCompany {
public:
	void addVehicle(Vehicle* vic);
	void rentAll(double days);
	void returnAll(int lateDays);
	void printAllVehicles();

protected:
	vector<Vehicle*> vehicleCollection;
};