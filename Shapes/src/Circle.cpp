/* Implementation for Circle (Circle.cpp) */
#include "Circle.h"
#include <iostream>
#define PI 3.14159265

// Constructor
Circle::Circle(const string & color, const string & name)
   : Shape(color, name), radius(0) { }

// Constructor
Circle::Circle(int radius, const string & color , const string & name)
   : Shape(color,name), radius(radius) { }

Circle::~Circle()
{
    //dtor
}

// Getters
int Circle::getRadius() const {
   return radius;
}

// Setters
void Circle::setRadius(int radius) {
   this->radius = radius;
}

void Circle::print() const {
   std::cout << "Circle radius: " << radius << ", Circle Area: "<< Circle::getArea() << ", subclass of ";
   Shape::print();
}

// Implement virtual function inherited for superclass Shape
float Circle::getArea() const {
   return radius * radius * PI;
}

float Circle::getVolume() const {
   return 0;
}
