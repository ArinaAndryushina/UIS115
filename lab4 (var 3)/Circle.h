#pragma once
#include "Geometric_figures.h"
class Circle :public Geometric_figures
{
private:
	double radius;
	/**
	 \brief	Принимает стороны
	 */
	void set_radius(const double radius);
public:
	/**
	 \brief	Конструктор с параметрами
	 */
	explicit Circle(const double radius);
	/**
	 \brief	Виртуальный деструктор
	 */
	~Circle();
	/**
	 \brief	Оператор сдвига
	 */
	friend ostream& operator<<(ostream& out, Circle& circ);
	/**
	 \brief	Получает периметр
	 */
	double get_perimeter()override;
	/**
	 \brief	Получает площадь
	 */
	double get_area()override;
};
