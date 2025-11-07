#include "Truck.h"

Truck::Truck(const string& modelName, double baseRatePerDay) {
	this->modelName = modelName;
	this->baseRatePerDay = baseRatePerDay;
	totalCost = 0;
	rentalDays = 0;
}

double Truck::calculateRentalCost() {
	double const MAINTENANCE_COST = 15.0;
	
	totalCost += rentalDays * (baseRatePerDay + MAINTENANCE_COST);

	if (rentalDays > 10) {
		inspectionRequired = true;
	}
	else
		inspectionRequired = false;
	
	return totalCost;
}

void Truck::returnVehicle(int lateDays) {
	isRented = false;

	if (lateDays > 0) {
		totalCost += 50 * lateDays;
	}
}

void Truck::displayInfo() {
	BaseVehicle::displayInfo();

	cout << "\nInspection Required: ";
	if (inspectionRequired) {
		cout << "True\n";
	}
	else
		cout << "False\n";
}