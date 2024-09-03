#include "airport.h"
#include <iostream>
#include <vector> //no estoy segura si las tengo que incluir o no
#include <string> //ya las habia incluido en el header file

void Airport::printAllFlights(){
  //ordenar alfabeticamente
  //ordenar el vector airlines alfabeticamente con base en el atributo shortName
sort (Airport::airlines.begin(), Airport::airlines.end());
cout<<"Los vuelos programados para"<<airport.getDate()<<"son"<<endl;
//ciclo para print
for (int i=0, i<Airline::flights.length(),i++){
  Airline::flights[i].printFlight()
}
}
void Flight::printFlight{
  cout<< getFlightNumber()<<endl;
  for (int i=0,i<Flight::seats.length(),i++){
    if Flight::seats[i!=0]{
      cout<<"Asiento"<<Flight::seats[i]<<"disponible"<<endl;
    }
  }
}
