#include "Triangle_area.h"

int main()
{
	setlocale(LC_ALL, "ru");
	cout << triangle_area(2, 3, 4) << endl;
	try
	{
		cout << triangle_area2(2, 3, 4) << endl;
		cout << triangle_area3(2, 3, 4) << endl;
		cout << triangle_area4(2, 3, 4) << endl;
		cout << triangle_area5(1000, 3, 4) << endl;
		cout << triangle_area6(2, 3354, 4) << endl;
	}
	catch (int)
	{
		cout << "Ошибка! Стороны неверны 1" << endl;
	}
	catch (invalid_argument error)
	{
		cerr << error.what() << endl;
	}
	catch (Empty_class)
	{
		cerr << "Ошибка! Стороны неверны 4" << endl;
	}
	catch (independent_class error)
	{
		cerr << error.message << endl;
	}
	catch (successor_class error)
	{
		cerr << error.what() << endl;
	}
}
