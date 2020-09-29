#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <Square.h>


class Rectangle : public Square
{
    private:
        int width;

    public:
        Rectangle(const string & color, const string & name);
        Rectangle(int width = 1, int length = 1, const string & color = "red" , const string & name = "Rectangle" );
        virtual ~Rectangle();

        int getWidth() const;
        void setWidth(int length);

        void print() const;      // Override the virtual function
        float getArea() const;  // to implement virtual function
        float  getVolume() const;

};

#endif // RECTANGLE_H
