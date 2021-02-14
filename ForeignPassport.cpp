#include "ForeignPassport.h"

ForeignPassport::ForeignPassport(const string& fullName, const string& seria, const size_t& number, const Date& date, const Date& datePut)
	: Passport(fullName, seria, number, date, datePut)
{
}

void ForeignPassport::addVisa(const string& country, const Date& date)
{
	Visa v(country, date);
	visas.push_back(v);
}
void ForeignPassport::addVisa(const Visa& v)
{
	visas.push_back(v);
}

void ForeignPassport::printOfVisa() const
{
	for (auto& i : visas) {
		cout << i << endl;
	}
}

ostream& operator<<(ostream& ost, const ForeignPassport& obj)
{
	Passport pass(obj);
	cout << pass << endl;
	ost << "~~~~VISA~~~~" << endl;
	for (auto& v : obj.visas) {
		ost << v << endl;
	};
	return ost;
}