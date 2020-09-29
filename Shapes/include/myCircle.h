#ifndef MYCIRCLE_H
#define MYCIRCLE_H

#include <Shape.h>


class myCircle : public Shape
{

    private:
        float radius;

    public:

        myCircle();
        myCircle(float rad, string &nam, string &col);
        virtual ~myCircle();

        void setRadius(float value);
        float getRadius();

        float getArea() const; // implement virtual function

};

#endif // MYCIRCLE_H
