//////////////////////////////////////////////////////////////////////////////
// Money.cpp
// файл реалізації – реалізація методів класу

#include "Money.h"
#include <iostream>
#include <cmath>
#include <sstream>

void Money::Display() const
{
	std::cout << std::endl;
	std::cout << " Hryvni = " << hr << std::endl;
	std::cout << " Kopijky = " << kop << std::endl;
}

void Money::Init(long x, long y)
{
	hr = x;
	kop = y;
}

void Money::Read()
{
	double x, y;
	std::cout << "Input money:" << std::endl;
	std::cout << " Hryvni = "; std::cin >> x;
	std::cout << " Kopijky = "; std::cin >> y;
	Init(x, y);
}

std::string Money::toString() const
{
	std::stringstream sout;
	sout << hr << " UAH, Kop ";
	sout << kop;
 return sout.str();
}

Money Money::Add(const Money& other) const
{
	Money result;
	result.hr = this->hr + other.hr;
	result.kop = this->kop + other.kop;

	// Якщо копійки перевищили 100, потрібно скорегувати гривні та копійки
	if (result.kop >= 100) 
	{
		result.hr += result.kop / 100;
		result.kop = 100;
	}

	return result;
}

Money Money::Divide(const Money& other) const
{
	Money result;
	result.hr = this->hr / other.hr;
	result.kop = this->kop / other.kop;

	// Якщо копійки перевищили 100, потрібно скорегувати гривні та копійки
	if (result.kop >= 100)
	{
		result.hr /= result.kop / 100;
		result.kop = 100;
	}

	return result;
}

Money Money::DivideFraction(double division)
{
	if (division == 0.0)
	{
		std::cerr << "Error.\n";
		exit(1);
	}
	Money result;
	result.hr = this->hr / division;
	result.kop = this->kop / division;
	return result;
}
