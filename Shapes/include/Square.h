#ifndef SQUARE_H
#define SQUARE_H

#include <Shape.h>

//added this
class Square : public Shape
{

    private:
        int length;

    public:
        Square(const string & color, const string & name);
        Square(int length = 1, const string & color = "red" , const string & name = "Square" );
        virtual ~Square();

        int getLength() const;
        void setLength(int length);

        void print() const;      // Override the virtual function
        float getArea() const;  // to implement virtual function
        float  getVolume() const;


};

#endif // SQUARE_H
