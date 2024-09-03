#include <string>
#include <vector>
#include "Passenger.h"
using std::string;
using std::vector;

class Flight{
    //atributes
    private:
    string desde,hasta,fecha;
    float precio,distancia;
    vector<Passenger> pasajeros; 
    int hora;
    public:
    //constructors
    Flight();
    //with arguments desde,hasta,precio,distancia,pasajeros,fecha,hora
    Flight(string const&,string const&,float const&,float const&,vector<Passenger> const&,string const&,int const&);
    //getters and setters
    string getDesde();
    string getHasta();
    float getPrecio();
    float getDistancia();
    vector<Passenger> getPasajeros();
    string getFecha();
    int getHora();
    void setDesde(string const&);
    void setHasta(string const&);
    void setPrecio(float const&);
    void setDistancia(float const&);
    void setPasajeros(vector<Passenger> const&);
    void setFecha(string const&);
    void setHora(int const&);
    //Other methods
};