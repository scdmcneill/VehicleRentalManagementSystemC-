#include "RentalCompany.h"

void RentalCompany::addVehicle(Vehicle* vic) {
	vehicleCollection.push_back(vic);
	cout << "Added Vehicle.\n";
}

void RentalCompany::rentAll(double days) {
	for (Vehicle* vic : vehicleCollection) {
		vic->rent(days);
	}
}

void RentalCompany::returnAll(int lateDays) {
	for (Vehicle* vic : vehicleCollection) {
		vic->returnVehicle(lateDays);
	}
}

void RentalCompany::printAllVehicles() {
	for (Vehicle* vic : vehicleCollection) {
		vic->displayInfo();
	}
}