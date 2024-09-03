#ifndef GUERRERO_H
#define GUERRERO_H
#include "Personaje.h"
#include <stdlib.h>
#include <time.h>
class Guerrero: public Personaje{
    public:
    Guerrero();
    Guerrero(std::string, int, int, int);
    int getArma();
    void setArma(int);
    int combate(Personaje&);
    private:
    int arma;
};
Guerrero::Guerrero(){
    arma=10;
}
Guerrero::Guerrero(std::string n, int e, int d, int a):Personaje(n, e, d){
    arma=a;
}
int Guerrero::getArma(){
    return arma;
}
void Guerrero::setArma(int a){
    arma=a;
}
int Guerrero::combate(Personaje& p2){
    srand(time(NULL));
    int y=1+rand()%(getDannio()-1);
    int x=-arma*y/p2.getDannio();
    return x;
}
#endif //GUERRERO_H