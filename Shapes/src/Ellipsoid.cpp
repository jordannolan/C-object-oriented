#include "Ellipsoid.h"
#include <iostream>
#define PI 3.14159265

// Constructor
Ellipsoid::Ellipsoid(const string & color, const string & name)
   : Ellipse(color, name), depth(0) { }

// Constructor
Ellipsoid::Ellipsoid(int depth,int minor, int major, int radius, const string & color , const string & name)
   : Ellipse(minor,major,radius,color,name), depth(depth) { }

Ellipsoid::~Ellipsoid()
{
    //dtor
}

// Getters
int Ellipsoid::getDepth() const {
   return depth;
}

// Setters
void Ellipsoid::setDepth(int depth) {
   this->depth = depth;
}

void Ellipsoid::print() const {
   std::cout << "Ellipsoid depth: " << depth << ", Ellipsoid Volume: "<< Ellipsoid::getVolume() << ", subclass of ";
   Shape::print();
}

// Implement virtual function inherited for superclass Shape
float Ellipsoid::getArea() const {
   return 0;
}

float Ellipsoid::getVolume() const {
   return Ellipse::getArea() * depth;
}

