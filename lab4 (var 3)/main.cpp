#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"

int main()
{
	Rectangle rec(7, 8);
	Triangle tr(3, 4, 5);
	Circle cir(8);
	cout << rec << endl;
	cout << tr << endl;
	cout << cir << endl;
}
