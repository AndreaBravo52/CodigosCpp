#include <string>
#include <vector>
#include "AirportEx.h"
#include "AirlineEx.h"
#include "FlightEx.h"

class Passenger{
private:
  string name;
  int phone;
public:
  //getters
  string getName(){return name;};
  int getPhone(){return phone;};
  //setters
  void setName(string n){name=n;};
  void setPhone(int p){phone=p};
}
