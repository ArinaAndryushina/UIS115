#pragma once
#include <string>
#include<iostream>
using namespace std;

class Liquid
{
protected:
	string name;
	double density;
	const double MIN_DENSITY = 0;
	/**
	 \brief	Проверка плотности
	 */
	void set_density(const double density);
	Liquid();
public:
	/**
	 \brief	Конструктор с параметрами
	 */
	explicit Liquid(const string& name, const double density);
	/**
	 \brief	Деструктор
	 */
	~Liquid() = default;
	/**
	 \brief	Оператор вывода
	 */
	friend ostream& operator<<(ostream& out, Liquid& liq);
	/**
	 \brief	получает плотность
	 */
	double get_density()const;
	/**
	 \brief	получает имя
	 */
	string get_name()const;
	/**
	 \brief	изменяет плотность
	 */
	void set_new_density(const double density);
	/**
	 \brief	изменяет имя
	 */
	void set_name(const string& name);
};
