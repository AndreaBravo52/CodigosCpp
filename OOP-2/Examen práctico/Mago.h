#ifndef MAGO_H
#define MAGO_H
#include "Personaje.h"
#include <stdlib.h>
#include <time.h>
class Mago: public Personaje{
    public:
    Mago();
    Mago(std::string, int, int, char);
    char getPoder();
    void setPoder(char);
    int combate(Personaje&);
    private:
    char poder;
};
Mago::Mago(){
    poder='B';
}
Mago::Mago(std::string n, int e, int d, char p):Personaje(n,e,d){
    poder=p;
}
char Mago::getPoder(){
    return poder;
}
void Mago::setPoder(char p){
    poder=p;
}
int Mago::combate(Personaje& p2){
    int x;
    srand(time(NULL));
    if (poder=='B'){
        x=-((20+(rand()%(151-20))*getDannio()))/p2.getDannio();
    }
    if (poder=='N'){
        x=-(50+(rand()%(5001-50)))/(p2.getDannio()+2);
    }
    return x;
}

#endif //MAGO_H