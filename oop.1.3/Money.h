//////////////////////////////////////////////////////////////////////////////
// Money.h
// заголовний файл Ц визначенн€ класу

#pragma once
#include <string>

class Money
{
	long hr;
	long kop;
public:
	long GetHr() const { return hr; }
	long GetKop() const { return kop; }
	void SetHr(long value) { hr = value; }
	void SetKop(long value) { kop = value; }
	void Init(long, long);
	void Read();
	void Display() const;
	std::string toString() const;
	Money Add(const Money& other) const;
	Money Divide(const Money& other) const;
	Money DivideFraction(double division);
}; 
