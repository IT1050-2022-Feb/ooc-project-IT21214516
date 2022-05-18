//MLB_02.02_05_VehicleRentalSystem
//IT21214516
//Class Payment

#include <iostream>
#include "Discount.h"
using namespace std;

class Payment{
  
  private:
    int paymentID;
    double amount;
    char type[10];
    Discount *dis;

  public:
     Payment()
    {
        dis = new Discount (001, 520.00);
    
     };
 
    Payment(int ID, double dAmount)
    {
      dis = new Discount (int ID, double dAmount);
   
    };
  
    void makePayment(int paymentID, double amount,const char type[10]);
    void payPayment();
  
    ~Payment()
    {
     
      delete dis;
      cout << "Discount is  deleted" << endl; 
    };

};