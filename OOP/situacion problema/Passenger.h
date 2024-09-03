#include <string>
using std::string;

class Passenger{
    //atributes
    private:
    string name;
    string seat;
    int phone;
    public:
    //constructors
    Passenger();
    //with arguments name/seat/phone
    Passenger(string const&,string const&,int const&);
    //getters and setters
    string getName();
    string getSeat();
    int getPhone();
    void setName(string const&);
    void setSeat(string const&);
    void setPhone(int const&);
    //Other methods
};