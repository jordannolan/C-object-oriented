#ifndef ELLIPSOID_H
#define ELLIPSOID_H

#include <Ellipse.h>


class Ellipsoid : public Ellipse
{
    private:
   int depth;   // Private data member

public:
   Ellipsoid(const string & color = "red" , const string & name = "Circle"); // Constructor
   Ellipsoid(int depth = 1,int minor = 1, int major =1,int radius = 1, const string & color = "red" , const string & name = "Ellipsoid" );
   virtual ~Ellipsoid();
   int getDepth() const;                // Getter
   void setDepth(int depth);     // Setter
   void print() const;      // Override the virtual function
   float getArea() const;  // to implement virtual function
   float  getVolume() const;
};

#endif // ELLIPSOID_H
