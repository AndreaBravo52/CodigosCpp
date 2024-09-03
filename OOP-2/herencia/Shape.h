#ifndef SHAPE_H
#define SHAPE_H
#include <string>

class Shape{
    public:
    Shape();
    Shape(int,int);
    void setX(int);
    void setY(int);
    int getX() const;
    int getY() const;
    virtual std::string draw();
    virtual double area()=0;
    private:
    int x;
    int y;
};

Shape::Shape(){
    x=0;
    y=0;
}
Shape::Shape(int _x, int _y){
    x=_x;
    y=_y;
}
void Shape::setX(int _x){
    x=_x;
}
void Shape::setY(int _y){
    y=_y;
}
int Shape::getX() const{
    return x;
}
int Shape::getY() const{
    return y;
}
std::string Shape::draw(){
    return "Es una figura";
}
#endif //SHAPE_H