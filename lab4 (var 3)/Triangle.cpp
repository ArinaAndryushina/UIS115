#include "Triangle.h"

void Triangle::set_sides(const double a, const double b, const double c)
{
	if ((a > 0 && b > 0 && c > 0) && a + b > c && b + c > a && a + c > b)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}
	else
	{
		throw invalid_argument("Неверные значения");
	}
}
Triangle::Triangle(const double a, const double b, const double c)
{
	set_sides(a, b, c);
}
Triangle::~Triangle() {};
ostream& operator<<(ostream& out, Triangle& tr)
{
	out << "Perimeter = " << tr.get_perimeter() << endl;
	out << "Area = " << tr.get_area() << endl;
	return out;
}
double Triangle::get_perimeter()
{
	return a + b + c;
}
double Triangle::get_area()
{
	double p = this->get_perimeter() / 2.0;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
