//MLB_02.02_05_VehicleRentalSystem
//IT21214516
//Discount class
#include <iostream>
using namespace std;

class Discount{

private:
  int discountID;
  double disAmount;

public:

  Discount()
  {
    discountID = 0;
    disAmount = 0.0;
  };

  Discount(int dID, double Amount)
  {
    discountID = dID;
    disAmount = Amount;
  };

  void prevReservation();
  double calDiscount(double payment);
  void addDiscount();
  
  ~Discount()
  {
    cout << "Discount " << discountID << " deleted " <<endl;
  };
    

};