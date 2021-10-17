#pragma once
#include "Geometric_figures.h"
class Triangle :public Geometric_figures
{
private:
	double a, b, c;
	/**
	 \brief	Принимает стороны
	 */
	void set_sides(const double a, const double b, const double c);
public:
	/**
	 \brief	Конструктор с параметрами
	 */
	explicit Triangle(const double a, const double b, const double c);
	/**
	 \brief	Виртуальный деструктор
	 */
	virtual ~Triangle();
	/**
	 \brief	Оператор сдвига
	 */
	friend ostream& operator<<(ostream& out, Triangle& tr);
	/**
	 \brief	Получает периметр
	 */
	double get_perimeter()override;
	/**
	 \brief	Получает площадь
	 */
	double get_area()override;
};


