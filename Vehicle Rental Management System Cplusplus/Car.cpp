#include "Car.h"

Car::Car(const string& modelName, double baseRatePerDay) {
	this->modelName = modelName;
	this->baseRatePerDay = baseRatePerDay;
	totalCost = 0;
	rentalDays = 0;
}

double Car::calculateRentalCost() {
	double cost = rentalDays * baseRatePerDay;

	if (rentalDays > 7) {
		double const DISCOUNT = 0.9;
		discountApplied = true;
		totalCost += cost * DISCOUNT;
	}
	else {
		discountApplied = false;
		totalCost += cost;
	}

	return totalCost;
}

void Car::returnVehicle(int lateDays) {
	isRented = false;
	
	if (lateDays > 0) {
		totalCost += 20 * lateDays;
	}
}

void Car::displayInfo() {
	BaseVehicle::displayInfo();

	cout << "\nDiscount Applied: ";
	if (discountApplied) {
		cout << "True\n";
	}
	else
		cout << "False\n";
}