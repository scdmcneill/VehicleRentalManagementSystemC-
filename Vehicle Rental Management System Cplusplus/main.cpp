#include "RentalCompany.h"
#include "Car.h"
#include "Truck.h"

int main() {
	RentalCompany rentalCo;

	Car* car1 = new Car("Toyota Camry", 28.50);
	Car* car2 = new Car("Ford Mustang", 47.25);

	Truck* truck1 = new Truck("Chevy Silverado", 55.00);
	Truck* truck2 = new Truck("Ford F-150", 54.00);


	rentalCo.addVehicle(car1);
	rentalCo.addVehicle(car2);
	rentalCo.addVehicle(truck1);
	rentalCo.addVehicle(truck2);

	cout << '\n';

	cout << "Before Rentals: \n";
	rentalCo.printAllVehicles();

	rentalCo.rentAll(8);
	cout << "\nAfter Rentals: \n";
	rentalCo.printAllVehicles();

	rentalCo.returnAll(2);
	cout << "\nAfter Returns: \n";
	rentalCo.printAllVehicles();

	return 0;
}