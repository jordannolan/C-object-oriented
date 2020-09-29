/* Implementation for Shape class (Shape.cpp) */
#include "Shape.h"
#include <iostream>

// Constructor
Shape::Shape(){
    this->color = "blank";
    this->name = "shape";
}

//Shape::Shape(const string & color) {
//   this->color = color;
//}

Shape::Shape(const string & color, const string & name) {
   this->color = color;
   this->name = name;
}

// Getter
string Shape::getColor() const {
   return color;
}

// Setter
void Shape::setColor(const string & color) {
   this->color = color;
}

// Getter
string Shape::getName() const {
   return name;
}

// Setter
void Shape::setName(const string & name) {
   this->name = color;
}

void Shape::print() const {
   std::cout << "Shape: Color: " << color << ", Name: " << name;
}
