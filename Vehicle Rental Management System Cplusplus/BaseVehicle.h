#pragma once

#include "Vehicle.h"

class BaseVehicle : public Vehicle {
public:
	// Inherited methods from Vehicle
	void rent(double days) override;
	void displayInfo() override;

	// virtual methods inherited from Vehicle
	virtual double calculateRentalCost() = 0;
	virtual void returnVehicle(int lateDays) = 0;

	// Constructors
	BaseVehicle() {}
	BaseVehicle(const string& modelName, double baseRatePerDay);

	//Destructor
	virtual ~BaseVehicle() = default;
	
protected:
	string modelName;
	double baseRatePerDay;
	bool isRented;
	double rentalDays;
	double totalCost;
};