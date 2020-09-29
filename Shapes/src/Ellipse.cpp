#include "Ellipse.h"
#include <iostream>
#define PI 3.14159265

// Constructor
Ellipse::Ellipse(const string & color, const string & name)
   : Circle(color,name){ }

// Constructor
Ellipse::Ellipse(int minor, int major, int radius, const string & color , const string & name)
   : Circle(radius,color,name), minor_axis(minor),major_axis(major) { }

Ellipse::~Ellipse()
{
    //dtor
}

// Getters
int Ellipse::getMinor() const {
   return minor_axis;
}

// Setters
void Ellipse::setMinor(int minor) {
   this->minor_axis = minor;
}

int Ellipse::getMajor() const {
   return major_axis;
}

// Setters
void Ellipse::setMajor(int major) {
   this->major_axis = major;
}

void Ellipse::print() const {
   std::cout << "Ellipse minor,major: " << minor_axis << "," << major_axis << ", Ellipse Area: "<< Ellipse::getArea() << ", subclass of ";
   Circle::print();
}

// Implement virtual function inherited for superclass Shape
float Ellipse::getArea() const {
   return minor_axis * major_axis * PI;
}

float Ellipse::getVolume() const {
   return 0;
}
