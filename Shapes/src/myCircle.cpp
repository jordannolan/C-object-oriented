#include "myCircle.h"
#define PI 3.14159265

myCircle::myCircle() : Shape()
{
    myCircle::radius = 0;
}

myCircle::myCircle(float rad, string & nam, string & col)
   : Shape(nam, col) {
        myCircle::radius = rad;
    }

myCircle::~myCircle()
{
    //dtor
}

void myCircle::setRadius(float value){
    myCircle::radius = value;
}

float myCircle::getRadius(){
    return myCircle::radius;
}

float myCircle::getArea()const{
    return (PI * myCircle::radius * myCircle::radius);
}
