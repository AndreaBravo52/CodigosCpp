#include <string>
#include <vector>
#include "Flight.h"
using std::string;
using std::vector;

class Airplane{
    //atributes
    private:
    string modelo;
    int gasolina,anio;
    vector<Flight> vuelos;
    public:
    //constructors
    Airplane();
    //with arguments modelo,gasolina,anio,vuelos
    Airplane(string const&,int const&,int const&,vector<Flight> const&);
    //getters and setters
    string getModelo();
    int getGasolina();
    int getAnio();
    vector<Flight> getVuelos();
    void setModelo(string const&);
    void setGasolina(int const&);
    void setAnio(int const&);
    void setVuelos(vector<Flight> const&);
    //Other methods
};
