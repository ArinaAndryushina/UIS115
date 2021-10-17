#include "Rectangle.h"

void Rectangle::set_sides(const double height, const double width)
{
	if (height > 0 && width > 0)
	{
		this->height = height;
		this->width = width;
	}
	else
	{
		throw invalid_argument("Неверные значения");
	}
}
Rectangle::Rectangle(const double height, const double width)
{
	set_sides(height, width);
}
Rectangle::~Rectangle() {};
ostream& operator<<(ostream& out, Rectangle& rec)
{
	out << "Perimeter = " << rec.get_perimeter() << endl;
	out << "Area = " << rec.get_area() << endl;
	return out;
}
double Rectangle::get_perimeter()
{
	return height * 2 + width * 2;
}
double Rectangle::get_area()
{
	return height * width;
}
