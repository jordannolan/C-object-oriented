/* Header for Shape class (Shape.h) */
#ifndef SHAPE_H
#define SHAPE_H

#include <string>
using namespace std;

class Shape {
private:
   string color;   // Private data member
   string name;

public:
    Shape();
   //Shape(const string & color = "red");  // Constructor
   Shape(const string & color = "red" ,const string & name = "shape");

   string getColor() const;            // Getter
   void setColor(const string & color);  // Setter

   string getName() const;            // Getter
   void setName(const string & name);

   // Virtual function, run subclass version if overridden
   virtual void print() const;
   // Pure virtual, to be implemented by subclass
   // You cannot create instance of Shape
   virtual float getArea() const = 0;
   virtual float  getVolume() const = 0;
};

#endif
