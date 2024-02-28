//////////////////////////////////////////////////////////////////////////////
// Money.cpp
// головний файл проекту – функція main
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Money.h"

int main()
{
	Money z, k, t;
	z.Read();
	z.Display();
	k.Read();
	k.Display();
	t = z.Add(k);
	std::cout << "Add(z) = " << t.GetHr() << "," << t.GetKop() << std::endl << std::endl;
	t = z.Divide(k);
	std::cout << "Divide(z) = " << t.GetHr() << "," << t.GetKop() << std::endl << std::endl;
	t = z.DivideFraction(1.7);
	std::cout << "DivideFraction(z) = " << t.GetHr() << "," << t.GetKop() << std::endl << std::endl;
	std::string s = z.toString();
	std::cout << s << std::endl << std::endl;
	std::cin.get();
	return 0;
}