#include <string>
#include <vector>
#include "Airplane.h"
using std::string;
using std::vector;

class Airline{
    //atributes
    private:
    string ciudadDeAbordaje,ciudadDeDestino,codigoDeVuelo;
    vector<Airplane> aviones;
    public:
    //constructors
    Airline();
    //with arguments ciudad de abordaje, ciudad destino, codigo de vuelo, aviones
    Airline(string const&,string const&,string const&,vector<Airplane> const&);
    //getters and setters
    string getCiudadDeAbordaje();
    string getCiudadDeDestino();
    string getCodigoDeVuelo();
    vector<Airplane> getAviones();
    void setCiudadDeAbordaje(string const&);
    void setCiudadDeDestino(string const&);
    void setCodigoDeVuelo(string const&);
    void setAviones(vector<Airplane> const&);
    //Other methods
};