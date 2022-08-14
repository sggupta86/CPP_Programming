#include<iostream>
using namespace std;

class Vehicle {
  public:
    string brand = "TATA";
    void car_d() {
      cout << "Tata Motors! \n" ;
    }
};

// Derived class
class Car : public Vehicle{
  public:
    string model = "Nexon";
};

int main() {
  Car myCar;
  myCar.car_d();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}