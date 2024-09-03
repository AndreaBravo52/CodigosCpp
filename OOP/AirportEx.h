#include <string>
#include <vector>

class Airline{}

class Airport{
private:
  sting id;
  string date;
  string city;
  string country;
  int totalTransactions;
  int totaldailyIncomes;
  vector<Airline> airlines;
public:
  //getters
  //setters
  //other methods
  void startOperations(string date);
  void printAllFlights();
  void closeOperations();
}
