#include "BaseVehicle.h"

#include <iostream>

void BaseVehicle::rent(double days) {
	isRented = true;
	rentalDays = days;
	
	totalCost = calculateRentalCost();
}

void BaseVehicle::displayInfo() {
	cout << modelName << "  |  ";
	if (isRented) {
		cout << "Rented" << "  |  ";
	}
	else {
		cout << "Available" << "  |  ";
	}
	cout << "Total Cost: $" << totalCost;
}

BaseVehicle::BaseVehicle(const string& modelName, double baseRatePerDay) {
	this->modelName = modelName;
	this->baseRatePerDay = baseRatePerDay;
	this->rentalDays = 0;
	this->totalCost = 0;
}
