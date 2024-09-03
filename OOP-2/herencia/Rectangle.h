#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

class Rectangle: public Shape{
    public:
    Rectangle();
    Rectangle(int, int, int, int);
    int getHeight() const;
    int getLength() const;
    void setHeight(int);
    void setLength(int);
    std::string draw();
    virtual double area();
    private:
    int height;
    int length;
};

Rectangle::Rectangle(){
    height=0;
    length=0;
    //se llama solo el constructor default de la clase base
}
Rectangle::Rectangle(int _x, int _y, int _height, int _length):Shape(_x,_y){
    //llamo explicito al constructor y le mando los valores que necesita
    length=_length;
    height=_height;
}
int Rectangle::getHeight() const{
    return height;
}
int Rectangle::getLength() const{
    return length;
}
void Rectangle::setHeight(int _height){
    height=_height;
}
void Rectangle::setLength(int _length){
    length=_length;
}
std::string Rectangle::draw(){
    return Shape::draw() + ": Rectángulo";
}
double Rectangle::area(){
    return height*length;
}

#endif //RECTANGLE_H