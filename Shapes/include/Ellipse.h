#ifndef ELLIPSE_H
#define ELLIPSE_H

#include <Circle.h>


class Ellipse : public Circle
{
private:
  int minor_axis;
  int major_axis;

public:
   Ellipse(const string & color = "red" , const string & name = "Circle"); // Constructor
   Ellipse(int minor = 1, int major =1, int radius = 1, const string & color = "red" , const string & name = "Ellipse" );
   virtual ~Ellipse();
   int getMinor() const;                // Getter
   void setMinor(int minor);     // Setter
   int getMajor() const;                // Getter
   void setMajor(int major);     // Setter

   void print() const;      // Override the virtual function
   float getArea() const;  // to implement virtual function
   float  getVolume() const;
};

#endif // ELLIPSE_H
