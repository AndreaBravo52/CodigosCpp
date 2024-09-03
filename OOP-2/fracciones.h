#ifndef FRACCION_H
#define FRACCION_H
#include <iostream>
//Definicion de clase
class Fraccion{
    private:
    int numerador;
    int denominador;
    public:
    Fraccion();
    Fraccion(int,int);
    int getNumerador() const;
    int getDenominador() const;
    void setNumerador(int);
    void setDenominador(int);
    Fraccion suma(Fraccion, Fraccion) const;
    Fraccion multiplicar(Fraccion, Fraccion) const;
    void print()const;
};
//Implementacion de funciones
    //constructor por default
   Fraccion:: Fraccion(){numerador=0;denominador=1;};
    //constructor con parametros
   Fraccion:: Fraccion(int num, int den){
        //codigo para simplificar fracciones
        //encontrar maximo comun divisor
        int x=num;
        int y=den;
        int z;
        while (y!=0){
            z=x%y;
            x=y; //x va a tener el MCD
            y=z;
        }
        //simplificar
        numerador=num/x;
        denominador=den/x;
    };
    //getters
    int Fraccion::getNumerador() const{return numerador;};
    int Fraccion::getDenominador() const{return denominador;};
    //setters
    void Fraccion::setNumerador(int n){numerador=n;};
    void Fraccion::setDenominador(int d){denominador=d;};
    //other methods
    //Suma de fracciones
    Fraccion Fraccion::suma(Fraccion f1,Fraccion f2)const{
        int den1=f1.getDenominador();
        int den2=f2.getDenominador();
        int num1=f1.getNumerador();
        int num2=f2.getNumerador();
        int denRes=den1*den2;
        int numRes1=num1*den2;
        int numRes2=num2*den1;
        int numTot=numRes1+numRes2;
       Fraccion res=Fraccion(numTot, denRes);
       return res;
    }
    //Multiplicacion de Fracciones
      Fraccion Fraccion::multiplicar(Fraccion f1, Fraccion f2) const{
        int den1=f1.getDenominador();
        int den2=f2.getDenominador();
        int num1=f1.getNumerador();
        int num2=f2.getNumerador();
        int denRes=den1*den2;
        int numRes=num1*num2;
       Fraccion res=Fraccion(numRes, denRes);
       return res;
    }
    //Imprimir fracciones
    void Fraccion::print()const{
        int num=getNumerador();
        int den=getDenominador();
        std::cout <<"\n"<< num << '/' << den << "\n";
    }
#endif