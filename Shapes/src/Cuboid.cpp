#include "Cuboid.h"
#include <iostream>

Cuboid::Cuboid(const string & color, const string & name)
   : Rectangle(color,name), depth(0) { }

Cuboid::Cuboid(int depth, int width, int length,const string & color, const string & name)
   : Rectangle(width,length,color,name), depth(depth) { }

Cuboid::~Cuboid()
{
    //dtor
}

int Cuboid::getDepth() const {
   return depth;
}

// Setters
void Cuboid::setDepth(int depth) {
   this->depth = depth;
}

void Cuboid::print() const {
   std::cout << "Cuboid depth: " << depth << ", Cuboid Volume: "<< Cuboid::getVolume() << ", subclass of ";
   Rectangle::print();
}

// Implement virtual function inherited for superclass Shape
float Cuboid::getArea() const {
   return Rectangle::getArea();
}

float Cuboid::getVolume() const {
   return Rectangle::getArea() * depth;
}
