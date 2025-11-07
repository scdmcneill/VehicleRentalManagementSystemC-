#pragma once
//Vehicle abstract class with abstract methods
#include <string>
#include <iostream>
#include <vector>

using std::cout;
using std::string;
using std::cin;
using std::vector;

class Vehicle {
public:
	virtual void rent(double days) = 0;
	virtual double calculateRentalCost() = 0;
	virtual void returnVehicle(int lateDays) = 0;
	virtual void displayInfo() = 0;

	// virtual destructor
	virtual ~Vehicle() = default;

};