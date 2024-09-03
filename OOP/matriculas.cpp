/* Andrea Bravo
A01028579
Programa de matriculas de aviones que dice con que paises se tiene mayor contacto*/

#include <iostream> //para imprimir en consola
#include <fstream> //para manejo de archivos
#include <string> // para manejo de strings
#include <cstdlib> // por si no se abre el archivo

using namespace std;

string matricula[16] = {"D","PP","CF","A7","CC","B","OY","HC","A6","EC","N","PK", "JA","XA","9V","HS"};
string pais[16] =  {"Alemania","Brasil","Canadá","Catar","Chile","China","Dinamarca","Ecuador","Emiratos Árabes","España","Estados Unidos","Indonesia", "Japón","México","Singapur","Tailandia"};
int cantidad[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int len=16;

void buscaMat(string base){ // función para buscar la matricula del pais en cada dato
  int cont1=0;
  int index;
    while(cont1<len){
      index=base.find(matricula[cont1]);
      if (index==0){
        cantidad[cont1]=cantidad[cont1]+1;
      }
      cont1++;
    }
  }
  void abrirDatos(){ // función para abrir archivo y guardarlos en la base de datos
    ifstream inputDatos;
    inputDatos.open("/Users/andreabravo/Documents/TEC_S1/Programación/OOP/infoMat.txt");
    if (inputDatos.fail()){
      cout << "No se pudo abrir el archivo" << endl;
      exit(1);
    }
    string linea;
    int cont3=0;
    while (getline (inputDatos, linea)){ //toma una linea del archivo y la guarda en la variable linea
      if (linea.length() > 1){
          buscaMat(linea);
      }
      cont3++;
    }
    inputDatos.close();
  }

void porcentaje(){ //función para encontrar paises con un pocentaje mayor a 20
  int cont2=0;
  int cont4=0;
  int per;
  float nDatos=0;
  while (cont4<len){
    nDatos=nDatos+cantidad[cont4];
    cont4++;
  }
  while (cont2<len){
    per=(cantidad[cont2]/nDatos)*100;
    if (per>20){
      cout << "Se tiene un mayor contacto con " << pais[cont2] <<endl;
    }
    cont2++;
  }
}

int main(){
  abrirDatos();
  porcentaje();
  return 0;
}
