/* Header for Circle (Circle.h) */
#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

// The class Circle is a subclass of Shape
class Circle : public Shape {
private:
   int radius;   // Private data member

public:
   Circle(const string & color = "red" , const string & name = "Circle"); // Constructor
   Circle(int radius = 1, const string & color = "red" , const string & name = "Circle" );
   virtual ~Circle();
   int getRadius() const;                // Getter
   void setRadius(int radius);     // Setter
   void print() const;      // Override the virtual function
   float getArea() const;  // to implement virtual function
   float  getVolume() const;
};

#endif
