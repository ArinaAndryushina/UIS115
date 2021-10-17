#pragma once
#include<iostream>
#include<exception>
#include "Empty_class.h"
#include "Independent_class.h"
#include "Successor_class.h"

/**
* \brief Функция вычисляет площадь треугольника
*/
double triangle_area(const double a, const double b, const double c);
/**
* \brief Функция вычисляет площадь треугольника спецификатор throw()
*/
double triangle_area2(const double a, const double b, const double c);
/**
* \brief Функция вычисляет площадь треугольника с конкретной спецификацией с подходящим стандартным исключением
*/
double triangle_area3(const double a, const double b, const double c);
/**
* \brief Функция вычисляет площадь треугольника со спецификацией с собственным реализованным исключением. (исключение как пустой класс)
*/
double triangle_area4(const double a, const double b, const double c);
/**
* \brief Функция вычисляет площадь треугольника со спецификацией с собственным реализованным исключением. (исключение как независимый класс с полями-параметрами функции)
*/
double triangle_area5(const double a, const double b, const double c);
/**
* \brief Функция вычисляет площадь треугольника со спецификацией с собственным реализованным исключением. (исключение как наследник от стандартного исключения с полями)
*/
double triangle_area6(const double a, const double b, const double c);
/**
* \brief Проверяет правильность треугольника.
*/
bool isTriangle(const double a, const double b, const double c);