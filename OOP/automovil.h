#include <string>

class Automovil {
private:
string marca;
string modelo;
int anio;
float kilometraje;
int numPuertas;
string color;
int numPasajeros;
float rendimiento; //litros por 100km
float capacidadTanque;
float gasolinaTanque;

public:
Automovil(); //constructor
// getters
string getMarca();
string getModelo();
int getAnio();
int getKilometraje();
int getNumPuertas();
int getNumPasajeros();
string getColor();
float getRendimiento();
float getCapacidadTanque();
floar getGasolinaTanque();
//setters
//void setMarca(string marca);
//void setModelo(string modelo);
//void setAnio(int anio);
void setKilometraje(float kilometraje);
//void setNumPuertas(int numPuertas);
void setColor(string color);
void setNumPasajeros(int numPasajeros);
void setRendimiento(float rendimiento);
void setCapacidadTanque(float capacidadTanque);
void setGasolinaTanque(float gasolinaTanque);
//otros metodos
void llenaTanque();
void imprimeAutomovil();
void requiereMantenimiento();
void validaGasolinaTanque();
void avanzaAutomovil(float distancia, int pasajeros);
void calculaConsumo(float distancia, int pasajeros);

}
