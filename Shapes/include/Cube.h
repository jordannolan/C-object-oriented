#ifndef CUBE_H
#define CUBE_H

#include <Square.h>


class Cube : public Square
{
    private:
        int depth;

    public:
        Cube(const string & color, const string & name);
        Cube(int depth, int length = 1, const string & color = "red" , const string & name = "Cube" );
        virtual ~Cube();

        int getDepth() const;
        void setDepth(int length);

        void print() const;      // Override the virtual function
        float getArea() const;  // to implement virtual function
        float  getVolume() const;
};

#endif // CUBE_H
