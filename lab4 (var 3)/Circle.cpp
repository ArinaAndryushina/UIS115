#include "Circle.h"

void Circle::set_radius(const double radius)
{
	if (radius > 0)
	{
		throw invalid_argument("Неверный радиус");
		
	}
	this->radius = radius;
}
Circle::Circle(const double radius)
{
	set_radius(radius);
}
Circle::~Circle() {};
ostream& operator<<(ostream& out, Circle& circ)
{
	out << "Perimeter = " << circ.get_perimeter() << endl;
	out << "Area = " << circ.get_area() << endl;
	return out;
}
double Circle::get_perimeter()
{
	return 2.0 * PI * radius;
}
double Circle::get_area()
{
	return PI * pow(radius, 2);
}
