//Andrea Bravo A01028579

#include "MatFrac.h"
using namespace std; 

int main(){
Fraccion f(3,4);
f.print();
Fraccion f2(2,4);
Fraccion res=f.multiplicar(f,f2);
res.print();
MatFrac m1;
m1.importMat("mat.txt");
MatFrac m2;
m2.importMat("mat2.txt");
MatFrac m3;
m3.sumaMat(m1, m2);
cout<<"Matriz 1: ";
m1.printMat();
cout<< "+ Matriz 2: ";
m2.printMat();
cout<< "es igual a Matriz Resultante: ";
m3.printMat();
cout<<"Nombre de archivo para guardar resultado: ";
string filePath;
cin >> filePath;
m3.guardaMat(filePath);
return 0;
}

