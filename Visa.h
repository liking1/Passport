#pragma once
#include "Date.h"

using namespace std;
class Visa
{
public:
	Visa(const string& country, const Date& date);
	void setDate(const Date& date);
	void setCountry(const string& country);
	friend ostream& operator<<(ostream& ost, const Visa& obj);

private:
	Date date;
	string country;
};