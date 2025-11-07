#pragma once

#include "BaseVehicle.h"

class Truck : public BaseVehicle {
public:
	Truck(const string& modelName, double baseRatePerDay);

	double calculateRentalCost() override;
	void returnVehicle(int lateDays) override;
	void displayInfo() override;


private:
	bool inspectionRequired;
};
