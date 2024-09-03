#include <string>
#include <vector>

class Airline{} //definir la clase para poder crear el vector
class Flight{} //definir la clase para poder crear el vector
class Passenger{} //definir la clase para poder crear el vector

class Airport {
private:
  string id;
  string city;
  string date;
  string country;
  int totalTransactions;
  int totalDailyIncomes;
  vector<Airline> airlines;
public:
  //getters
  sting getId();
  //setters
  void setId(string id);
  //other methods
  void starOperations(string date);
  void printAllFlights();
  void printFlightSchedule();
  void closeOperations();
}

class Airline {
private:
  string boardingCity;
  string shortName;
  int incomes;
  vector<Flight> flights;
public:
  //getters
  string getBoardingCity();
  //setters
  void setBoardingCity(string boardingCity);
  //other methods
  void updateAirline();
  void scheduleFlights();
  void currentIncome();
  void closeOperations();
}

class Flight{
private:
  string flightNumer;
  string date;
  int hour; //int y se registra como militar
  float price;
  string airplaneModel
  string from;
  string to;
  int distance;
  string crew;
  float fuel;
  vector<Passenger> seats;
public:
  //getters
  string getDate();
  //setters
  void setDate(string date);
  //other methods
  void calculateFuel();
void printFlight();
}

class Passenger{
private:
  string name;
  int phone;
public:
  //getters
  string getName();
  //setters
  void setName(string name);
}
