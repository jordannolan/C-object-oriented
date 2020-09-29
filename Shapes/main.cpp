/* A test driver program for polymorphism (TestShape.cpp) */
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Cube.h"
#include "Cuboid.h"
#include "Ellipse.h"
#include "Ellipsoid.h"
//#include "Rectangle.h"
#include <iostream>
using namespace std;

int main() {
//   // Circle object
//   Circle c1(5, "blue");
//   c1.print();
//   cout << endl;
//   cout << "area=" << c1.getArea() << endl;
//
//   // Square object
//   Square sq1(10);
//   sq1.print();
//   cout << endl;
//
//   // Rectangle object
//   Rectangle r1(10,20);
//   r1.print();
//   cout << endl;
//
//   // Cube object
//   Cuboid cu1(10,20,30);
//   cu1.print();
//   cout << endl;
//
//   // Cuboid object
//   Cuboid cb1(10,20);
//   cb1.print();
//   cout << endl;

//////////////////////////////////////////////////////////////////
cout << "Testing Inheritance.." << endl;
	cout << "**********************" << endl;
	Square *sq = new Square();
	sq->print();

	Square *sq2 = new Square(10);
	sq2->print();

	Rectangle *rect = new Rectangle();
	rect->setColor ("cyan");
	rect->print();

	Rectangle *rect2 = new Rectangle(5, 10);
	rect2->setColor ("green");
	rect2->print();

	Cube *c = new Cube(5,5, "blue");
	c->print();

	Circle *circ = new Circle(10, "pink");
	circ->print();

	Ellipse *ellipse = new Ellipse (5, 3, 3, "magenta");
	ellipse->print();

	Ellipsoid *ellipsoid = new Ellipsoid (4, 8, 3, 3, "purple");
	ellipsoid->print();

							// test polymorphism
	cout << "Testing Polymorphism.." << endl;
	cout << "**********************" << endl;
	Shape *shape;
	shape = sq2;
	cout << "Testing Polymorphism.." << endl;
	shape->print();

	cout << "Name:" << shape->getName() << endl;

	ellipse = ellipsoid;
	ellipse->print();

	cout << "Name:" << ellipse->getName() << endl;

	Cube *cube = new Cube(10);
	sq2 = cube;
	sq2->print();
	cout << "Name:" << sq2->getName() << endl;

	circ = ellipse;
	circ->print();
	cout << "Name:" << circ->getName() << endl;
}
