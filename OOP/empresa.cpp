#include <iostream>
#include <string>
using namespace std;
// declaración de constantes
    const int NUM_EMP=5;
    //Clase Empleado
class Empleado{
   public:
       Empleado(); //constructor
       ~Empleado(); // destructor
       //getters
       string getNomina();
       string getNombre();
       float getSueldo();
       char getCategoria();
       //setters
       void setNomina(string const&);
       void setNombre(string const&);
       void setSueldo(float const&);
       void setCategoria(char const&);
       //otros metodos
       void pideDatos();
       void aumentaSueldo(float const&);
       void imprimeEmpleado();
       void cambiaCategoria();

       //atributos de clase
   private:
       string nomina,nombre;
       float sueldo;
       char categoria;
};
Empleado::Empleado()
{
   nomina="sin nomina";
   nombre="sin nombre";
   sueldo=0;
   categoria=' ';
}

Empleado::~Empleado()
{
   //destructor
}
//getters
string Empleado::getNomina(){
   return nomina;
}
string Empleado::getNombre(){
   return nombre;
}
float Empleado::getSueldo(){
   return sueldo;
}
char Empleado::getCategoria(){
   return categoria;
}
void Empleado::setNomina(string const& n){ nomina=n;
}
void Empleado::setNombre(string const& n){ nombre=n;
}
void Empleado::setSueldo(float const& s){
   sueldo=s;
}
void Empleado::setCategoria(char const& c){ categoria=c;
}
//otros metodos
void Empleado::pideDatos(){
   cout<<"Nomina: ";
   cin>>nomina;
   cout<<"Nombre: ";
   cin>>nombre;
   cout<<"Categoria: ";
   cin>>categoria;
   categoria=tolower(categoria);
   if(categoria>='a'&&categoria<='n')
    sueldo=10000;
    else if(categoria>'n'&&categoria<'t')
   sueldo=15000;
   else
   sueldo=20000;
 }
void Empleado::aumentaSueldo(float const& porcentaje){ sueldo*=porcentaje;
}
void Empleado::imprimeEmpleado(){
cout<<"Nomina: "<<nomina<<" Nombre: "<<nombre<<endl<<"Sueldo: "<<sueldo<<" Categoria: "<<categoria<<endl;
}
void Empleado::cambiaCategoria(){
cout<<"La categoria actual es: "<<categoria<<endl; cout<<"Nueva categoria: ";
cin>>categoria;
}
//Clase Empresa
class Empresa{
public:
   Empresa();
   Empresa(string,string);
   ~Empresa();
   string getNombre();
   string getGiro();
   void setNombre(string);
   void setGiro(string);
   void imprimeEmpresa();
   void contrataEmpleados();
private:
   string nombre;
string giro;
    Empleado listaEmpleados[NUM_EMP];
};
Empresa::Empresa(){
   nombre="";
giro=""; }
Empresa::Empresa(string n, string g){
   nombre=n;
giro=g; }
Empresa::~Empresa(){
}
string Empresa::getNombre(){
   return nombre;
}
string Empresa::getGiro(){
   return giro;
}
void Empresa::setNombre(string n){
   nombre=n;
}
void Empresa::setGiro(string g){
   giro=g;
}
void Empresa::imprimeEmpresa(){ cout<<"\n"<<nombre<<" giro: "<<giro<<endl; cout<<"\nLista de empleados:"<<endl; for(size_t i=0;i<NUM_EMP;i++)
listaEmpleados[i].imprimeEmpleado();
}
void Empresa::contrataEmpleados(){
   for(size_t i=0;i<NUM_EMP;i++)
       listaEmpleados[i].pideDatos();
}
//Aplicacion
int main(){
string nombre="miEmpresa", giro="Educacion";
Empresa miEmpresa(nombre,giro);
miEmpresa.contrataEmpleados();
miEmpresa.imprimeEmpresa();
return 0; }
