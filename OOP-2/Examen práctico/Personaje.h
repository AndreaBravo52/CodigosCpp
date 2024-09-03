#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <string>
#include <iostream>
class Personaje{
    public:
    Personaje();
    Personaje(std::string, int, int);
    friend std::ostream &operator <<(std::ostream&, const Personaje&);
    std::string getNombre();
    int getEnergia();
    int getDannio();
    void setNombre(std::string);
    void actualizaEnergia(int);
    virtual int combate(Personaje&)=0;
    private:
    std::string nombre;
    int energia;
    int dannio;
};
Personaje::Personaje(){
    nombre="";
    energia=1;
    dannio=1;
}
Personaje::Personaje(std::string n, int e, int d){
    nombre=n;
    energia=e;
    dannio=d;
}
std::ostream &operator <<(std::ostream& out, const Personaje& p){
    out << "N: " << p.nombre << "\nE: " << p.energia << "\n";
    if (p.energia<=0){
        out <<"Personaje sin vida\n";
    }
    return out;
}
std::string Personaje::getNombre(){
    return nombre;
}
int Personaje::getEnergia(){
    return energia;
}
int Personaje::getDannio(){
    return dannio;
}
void Personaje::setNombre(std::string n){
    nombre=n;
}
void Personaje::actualizaEnergia(int e){
    energia=energia+e;
}
#endif //PERSONAJE_H