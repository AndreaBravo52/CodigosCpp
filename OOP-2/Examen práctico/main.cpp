/*Andrea Bravo
A01028579*/
#include "Mago.h"
#include "Guerrero.h"
using namespace std;
 int main(){
    Personaje *jug[2];
    jug[0]=new Guerrero("A",100,4,30);
    jug[1]=new Mago("B", 100, 4,'N');
    cout<<*jug[0]<<endl;
    cout<<*jug[1]<<endl;
    int pGvM;
    pGvM=jug[0]->combate(*jug[1]);
    int pMvG;
    pMvG=jug[1]->combate(*jug[0]);
    jug[0]->actualizaEnergia(pMvG);
    jug[1]->actualizaEnergia(pGvM);
    cout<<*jug[0]<<endl;
    cout<<*jug[1]<<endl;
    return 0;
 }