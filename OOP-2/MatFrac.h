#ifndef MATFRAC_H
#define MATFRAC_H
#include "fracciones.h"
#include <sstream>
#include <fstream>
#include <vector>
#include <string>

class MatFrac{
    private:
    std::vector <int> numerador;
    std::vector <int> denominador;
    public:
    MatFrac();
    MatFrac(const Fraccion, const Fraccion, const Fraccion, const Fraccion);
    int getNumerador(int);
    int getDenominador(int);
    int getSize();
    Fraccion getFraccion(int);
    void printMat();
    MatFrac multiplicarMat(MatFrac, MatFrac);
    void importMat(std::string);
    void sumaMat(MatFrac,MatFrac);
    void guardaMat(std::string);
};
    //constructor sin parametros
    MatFrac::MatFrac(){
        std::vector <int> numerador={};
        std::vector <int> denominador={};
    }

    //getters
    int MatFrac::getNumerador(int i){
        int num;
        num=numerador[i];
        return num;
    }
    int MatFrac::getDenominador(int i){
        int den;
        den=denominador[i];
        return den;
    }
    Fraccion MatFrac::getFraccion(int i){
        Fraccion f(numerador[i],denominador[i]);
        return f;
    }
    int MatFrac::getSize(){
        int n=numerador.size();
        return n;
    }
    //meter datos a matriz
    void MatFrac::importMat(std::string filePath){
        std::string num, den;
        std::ifstream file;
        file.open(filePath);
        if (file.fail()){
            std::cout << "No se pudo abrir el archivo";}
        else 
           while (!file.eof()){
               std::getline(file,num);
               numerador.push_back(stoi(num));
               std::getline(file, den);
               denominador.push_back(stoi(den));
           }
           file.close();
        }     

    //imprimir matriz
    void MatFrac::printMat(){
        for (int i=0;i<4;i++){
            Fraccion f(numerador[i],denominador[i]);
            f.print();
        }
    }

    //sumar matriz
    void MatFrac::sumaMat(MatFrac m1, MatFrac m2){
        if (m1.getSize()==m2.getSize()){
            for (int i=0;i<4;i++){
                Fraccion f1=m1.getFraccion(i);
                Fraccion f2=m2.getFraccion(i);
                Fraccion fRes=f1.suma(f1,f2);
                int numRes=fRes.getNumerador();
                numerador.push_back(numRes);
                int denRes=fRes.getDenominador();
                denominador.push_back(denRes);
            }
        }
        else std::cout<<"Operación Imposible";
    }

    //guardar datos de matriz
    void MatFrac::guardaMat(std::string filePath){
        std::string num, den;
        std::ofstream file;
        file.open(filePath);
        if (file.fail()){
            std::cout << "No se pudo abrir el archivo";}
        else 
           for (int i=0; i<getSize();i++){
               file << numerador[i]<<"/"<<denominador[i]<<"\n";
           }
           file.close();
        }     
  

#endif