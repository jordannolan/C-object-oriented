#include "Rectangle.h"
#include <iostream>

// constructor
Rectangle::Rectangle(const string & color, const string & name)
   : Square(color,name), width(0) { }

Rectangle::Rectangle(int width, int length,const string & color, const string & name)
   : Square(length,color,name), width(width) { }

Rectangle::~Rectangle()
{
    //dtor
}

int Rectangle::getWidth() const {
   return width;
}

// Setters
void Rectangle::setWidth(int length) {
   this->width = width;
}

void Rectangle::print() const {
   std::cout << "Rectangle width: " << width << ", Rectangle Area: "<< Rectangle::getArea() << ", subclass of ";
   Square::print();
}

// Implement virtual function inherited for superclass Shape
float Rectangle::getArea() const {
   return width * Square::getLength();
}

float Rectangle::getVolume() const {
   return 0;
}
