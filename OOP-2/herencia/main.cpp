#include "Circle.h"
#include "Polygon.h"
#include "Rectangle.h"
#include <iostream>
using namespace std;

int main(){
/*     Shape *ptrc1;
    Circle c1(0,0,5);
    ptrc1=&c1;
    cout << ptrc1 ->draw();  */

    Shape *shapesPtr[5];
    shapesPtr[0]=new Polygon(0,0,6,5,3);
    shapesPtr[1]=new Rectangle(0,0,4,6);
    shapesPtr[2]=new Rectangle(1,1,5,5);
    shapesPtr[3]=new Circle(2,2,5);
    shapesPtr[4]=new Circle(5,5,5);
    for (int i=0; i<6; i++)
    {
        cout << shapesPtr[i]->draw()<<endl;
        cout << shapesPtr[i]-> area()<<endl;
    }

    return 0;
}