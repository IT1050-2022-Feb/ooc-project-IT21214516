//MLB_02.02_05_VehicleRentalSystem
//IT21214516
//Vehicle class
#include <iostream>
#include <cstring>
#include "User.h"

using namespace std;


class Vehicle
{
    private:
        char vehicleType[10];
        int registrationNo;
        char color[10];
        double rentalCharge;
        User* U[5];
    
public:
        Vehicle()
        {
            strcpy(vehicleType, "");
            registrationNo = 0;
            strcpy(color, "");
            rentalCharge = 0.0;
            
        };
       
      void addVehicleDetails(const char vType[10], const char regNo, const char vColor[10], double rCharge);
        
      void updateVehicleType(const char vType[10], const char regNo, const char vColor[10], double rCharge);
        
      void checkAvailability();
        ~Vehicle()
        {
          cout << "Vehicle " << registrationNo << " deleted " << endl;
        };
};