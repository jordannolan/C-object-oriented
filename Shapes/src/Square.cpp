#include "Square.h"
#include <iostream>

// constructor
Square::Square(const string & color, const string & name)
   : Shape(color,name), length(0) { }

Square::Square(int length,const string & color, const string & name)
   : Shape(color,name), length(length) { }

Square::~Square()
{
    //dtor
}

int Square::getLength() const {
   return length;
}

// Setters
void Square::setLength(int length) {
   this->length = length;
}

void Square::print() const {
   std::cout << "Square length: " << length << ", Square Area: "<< Square::getArea() << ", subclass of ";
   Shape::print();
}

// Implement virtual function inherited for superclass Shape
float Square::getArea() const {
   return length * length;
}

float Square::getVolume() const {
   return 0;
}
