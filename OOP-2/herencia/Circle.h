#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
const double PI=3.14;
class Circle: public Shape{
    public:
    Circle();
    Circle(int, int, int);
    int getRadius() const;
    void setRadius(int);
    virtual std::string draw();
    virtual double area();
    private:
    int radius;
};

Circle::Circle(){
    radius=0;
    //se llama solo el constructor default de la clase base
}
Circle::Circle(int _x, int _y, int _radius):Shape(_x,_y){
    //llamo explicito al constructor y le mando los valores que necesita
    radius=_radius;
}
int Circle::getRadius() const{
    return radius;
}
void Circle::setRadius(int _radius){
    radius=_radius;
}
std::string Circle::draw(){
    return Shape::draw() + ": Círculo";
}
double Circle::area(){
    return PI*radius*radius;
}

#endif //CIRCLE_H