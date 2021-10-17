#include "Triangle_area.h"

double triangle_area(const double a, const double b, const double c)
{
	double p = (a + b + c) / 2.0;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
double triangle_area2(const double a, const double b, const double c)
{
	if (isTriangle(a, b, c))
	{
		return triangle_area(a, b, c);
	}
	throw 1;
}
double triangle_area3(const double a, const double b, const double c)
{
	if (isTriangle(a, b, c))
	{
		return triangle_area(a, b, c);
	}
	throw invalid_argument{ "Ошибка! Стороны неверны 3" };
}
double triangle_area4(const double a, const double b, const double c)
{
	if (isTriangle(a, b, c))
	{
		return triangle_area(a, b, c);
	}
	throw Empty_class();
}

double triangle_area5(const double a, const double b, const double c)
{
	if (isTriangle(a, b, c))
	{
		return triangle_area(a, b, c);
	}
	throw independent_class("Ошибка!Стороны неверны 5");
}

double triangle_area6(const double a, const double b, const double c)
{
	if (isTriangle(a, b, c))
	{
		return triangle_area(a, b, c);
	}
	throw successor_class("Ошибка!Стороны неверны 6");
}

bool isTriangle(const double a, const double b, const double c)
{
	return (a > 0 && b > 0 && c > 0) && a + b > c && b + c > a && a + c > b;
}
