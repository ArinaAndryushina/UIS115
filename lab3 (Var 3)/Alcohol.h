#pragma once
#include"Liquid.h"

class Alcohol :public Liquid
{
private:
	double strength_drink;
	/**
	 \brief	Проверка крепости напитка
	 */
	void set_strength_drink(const double strength_drink);
	const double MIN_DEGREE = 0;
	const double MAX_DEGREE = 96;
public:
	/**
	 \brief	Конструктор с параметрами
	 \param const double strength_drink
	 \param const string& name
	 \ const double density
	 */
	explicit Alcohol(const double strength_drink, const string& name, const double density);
	/**
	 \brief	Деструктор
	 */
	~Alcohol();
	/**
	 \brief	Оператор сдвига
	 */
	friend ostream& operator<<(ostream& out, Alcohol& alc);
	/**
	 \brief	получает крепость
	 */
	double get_strength_drink()const;
	/**
	 \brief	меняет крепость
	 */
	void set_new_strength_drink(const double strength_drink);
};

