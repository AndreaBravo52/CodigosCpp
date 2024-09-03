#ifndef POLYGON_H
#define POLYGON_H
#include "Shape.h"

class Polygon: public Shape{
    public:
    Polygon();
    Polygon(int, int, int, int, int);
    int getNumSides() const;
    void setNumSides(int);
    std::string draw();
    virtual double area();
    private:
    int numSides;
    int lenSides;
    int apotema;
};

Polygon::Polygon(){
    numSides=0;
    lenSides=0;
    apotema=0;
    //se llama solo el constructor default de la clase base
}
Polygon::Polygon(int _x, int _y, int _numSides, int _lenSides, int _apotema):Shape(_x,_y){
    //llamo explicito al constructor y le mando los valores que necesita
    numSides=_numSides;
    lenSides=_lenSides;
    apotema=_apotema;
}
int Polygon::getNumSides() const{
    return numSides;
}
void Polygon::setNumSides(int _numSides){
    numSides=_numSides;
}
std::string Polygon::draw(){
    return Shape::draw() + ": Poligono";
}
double Polygon::area(){
    return 0.5*apotema*lenSides*numSides;
}
 
#endif //POLYGON_H