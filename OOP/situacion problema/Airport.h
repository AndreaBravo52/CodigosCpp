#include <string>
#include <vector>
#include "Airline.h"
using std::string;
using std::vector;

class Airport{
    //atributes
    private:
    string id, ciudad;
    vector<Airline> aereolineas;
    public:
    //constructors
    Airport();
    //with arguments id,ciudad,aereolineas
    Airport(string const&,string const&,vector<Airline> const&);
    //getters and setters
    string getId();
    string getCiudad();
    vector<Airline> getAereolineas();
    void setId(string const&);
    void setCiudad(string const&);
    void setAereolineas(vector<Airline> const&);
    //Other methods
};