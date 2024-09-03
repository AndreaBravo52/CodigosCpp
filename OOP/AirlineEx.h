#include <string>
#include <vector>
#include "AirportEx.h"

class Flight{}

class Airline{
private:
  string boardingCity;
  string shortName;
  int incomes;
  vector<Flight> flights;
public:
  //getters
  //setters
  //othermethods
  void updateAirline();
  void scheduleFlight();
  int currentIncome();
  void closeOperation();
}
