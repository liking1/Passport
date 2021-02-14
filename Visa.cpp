#include "Visa.h"

Visa::Visa(const string& country, const Date& date)
{
	setDate(date);
	setCountry(country);
}

void Visa::setDate(const Date& date)
{

	this->date.setDate(date.getDay(), date.getMonth(), date.getYear());

}

void Visa::setCountry(const string& country)
{
	if (!country.empty())
		this->country = country;
}

ostream& operator<<(ostream& ost, const Visa& obj)
{
	ost << "Country : " << obj.country << endl;
	ost << "Date : " << obj.date << endl;
	return ost;
}