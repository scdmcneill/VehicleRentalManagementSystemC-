#pragma once  
#include "BaseVehicle.h"  

class Car : public BaseVehicle {  
public:  
   // Car Constructor  
   Car(const string& modelName, double baseRatePerDay);  

   // Methods
   double calculateRentalCost() override;  
   void returnVehicle(int lateDays) override;  
   void displayInfo() override;  

private:  
   bool discountApplied;  
};