#include <string>
#include <vector>
#include "AirportEx.h"
#include "AirlineEx.h"

class Passenger {}
class Crew{}

class Flight{
private:
  string date;
  int hour;
  int price;
  string airplaneModel;
  string fromTo;
  int distance;
  int fuel;
  vector<Crew> crew;
  vector<Passenger> seats;
public:
  //getters
  //setters
  //othermethods
  int calculateFuel()
}
