#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class Vector3D
{
private:
	double x;
	double y;
	double z;
public:
	/**
	 \brief	Конструктор
	 */
	explicit Vector3D(const double x, const double y, const double z);
	/**
	 \brief	Деструктор по умолчанию.
	 */
	~Vector3D() = default;
	/**
	 \brief	Конструктор копирования по умолчанию.
	 */
	Vector3D(const  Vector3D&) = default;
	/**
	 \brief	Конструктор присваивания по умолчанию.
	 */
	Vector3D& operator=(const  Vector3D&) = default;
	/**
	 \brief	Оператор сдвига
	 */
	friend ostream& operator<<(ostream& out, Vector3D& vec);
	/**
	 \brief	Оператор сложения
	 */
	Vector3D operator+(const Vector3D& other);
	/**
	 \brief	Оператор вычитания
	 */
	Vector3D operator-(const Vector3D& other);
	/**
	 \brief	Скалярное произведение векторов
	 */
	double operator*(const Vector3D& other);
	/**
	 \brief	Оператор умножения на число
	 */
	Vector3D operator*(const double a);
	/**
	 \brief	длина вектора
	 */
	double get_vector_length() const;
	/**
	 \brief	 x
	 */
	double get_x()const;
	/**
	 \brief	 y
	 */
	double get_y()const;
	/**
	 \brief	 z
	 */
	double get_z()const;
	/**
	 \brief	 равно
	 */
	bool operator==(const Vector3D& other);
	/**
	 \brief	 больше
	 */
	bool operator>(const Vector3D& other);
	/**
	 \brief меньше
	 */
	bool operator<(const Vector3D& other);
};