#pragma once
#include "Geometric_figures.h"
class Rectangle :public Geometric_figures
{
private:
	double height, width;
	/**
	 \brief	Принимает стороны
	 */
	void set_sides(const double height, const double width);
public:
	/**
	 \brief	Конструктор с параметрами
	 */
	explicit Rectangle(const double height, const double width);
	/**
	 \brief	Виртуальный деструктор
	 */
	virtual ~Rectangle();
	/**
	 \brief	Оператор сдвига
	 */
	friend ostream& operator<<(ostream& out, Rectangle& rec);
	/**
	 \brief	Получает периметр
	 */
	double get_perimeter()const override;
	/**
	 \brief	Получает площадь
	 */
	double get_area()const override;
};

