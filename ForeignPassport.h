#pragma once
#include "Passport.h"
#include <vector>
#include "Visa.h"

using namespace std;
class ForeignPassport : Passport
{
public:
	ForeignPassport(const string& fullName, const string& seria, const size_t& number, const Date& date, const Date& datePut);
	void addVisa(const string& country, const Date& date);
	void addVisa(const Visa& v);
	void printOfVisa() const;
	friend ostream& operator<<(ostream& ost, const ForeignPassport& obj);
private:
	vector<Visa> visas;
};