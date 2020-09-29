#ifndef CUBOID_H
#define CUBOID_H

#include <Rectangle.h>


class Cuboid : public Rectangle
{
    private:
        int depth;

    public:
        Cuboid(const string & color, const string & name);
        Cuboid(int depth = 1, int width = 1, int length = 1, const string & color = "red" , const string & name = "Cuboid" );
        virtual ~Cuboid();

        int getDepth() const;
        void setDepth(int length);

        void print() const;      // Override the virtual function
        float getArea() const;  // to implement virtual function
        float  getVolume() const;
};

#endif // CUBOID_H
