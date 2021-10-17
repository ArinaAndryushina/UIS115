#include"Alcohol.h"
#include "Liquid.h"

int main()
{
	Alcohol alc(45, "VODKA", 900);
	cout << alc << endl;
	Liquid liq("WATER", 785);
	cout << liq << endl;
}
