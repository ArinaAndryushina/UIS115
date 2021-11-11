#include"Liquid.h"
void Liquid::set_density(const double density)
{
	if (density > MIN_DENSITY)
	{
		this->density = density;
	}
	else
	{
		throw invalid_argument{ "ѕлотность должна быть больше нул¤" };
	}
}
Liquid::Liquid()
{
	name = "";
	density = 0;
}
ostream& operator<<(ostream& out, Liquid& liq)
{
	out << "Name:" << liq.get_name() << endl;
	out << "Density: " << liq.get_density() << endl;
	return out;
}
Liquid::Liquid(const string& name, const double density)
{
	this->name = name;
	set_density(density);
}
void Liquid::set_new_density(const double density)
{
	set_density(density);
}
void Liquid::set_name(const string& name)
{
	this->name = name;
}
string Liquid::get_name()const
{
	return name;
}
double Liquid::get_density()const
{
	return density;
}
