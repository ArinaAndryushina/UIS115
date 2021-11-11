#include"Liquid.h"
#include "Alcohol.h"

void Alcohol::set_strength_drink(const double strength_drink)
{
	if (strength_drink < MIN_DEGREE && strength_drink >= MAX_DEGREE)
	{
		throw invalid_argument{ "Неверная крепость напитка" };
	}
		this->strength_drink = strength_drink;
}
void Alcohol::set_new_strength_drink(const double strength_drink)
{
	set_strength_drink(strength_drink);
}
Alcohol::Alcohol(const double strength_drink, const string& name, const double density)
{
	set_strength_drink(strength_drink);
	this->name = name;
	set_density(density);
}
ostream& operator<<(ostream& out, Alcohol& alc)
{
	out << "Name:" << alc.get_name() << endl;
	out << "Strenght: " << alc.get_strength_drink() << endl;
	return out;
}
double Alcohol::get_strength_drink()const
{
	return strength_drink;
}
