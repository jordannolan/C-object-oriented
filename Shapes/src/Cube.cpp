#include "Cube.h"
#include <iostream>

// constructor
Cube::Cube(const string & color, const string & name)
   : Square(color,name), depth(0) { }

Cube::Cube(int depth, int length,const string & color, const string & name)
   : Square(length,color,name), depth(depth) { }

Cube::~Cube()
{
    //dtor
}

int Cube::getDepth() const {
   return depth;
}

// Setters
void Cube::setDepth(int depth) {
   this->depth = depth;
}

void Cube::print() const {
   std::cout << "Cube depth: " << depth << ", Cube volume: "<< Cube::getVolume() << ", subclass of ";
   Square::print();
}

// Implement virtual function inherited for superclass Shape
float Cube::getArea() const {
   return Square::getArea();
}

float Cube::getVolume() const {
   return Square::getArea() * depth;
}
