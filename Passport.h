#pragma once
#include <iostream>
#include <string>
#include "Date.h"

using namespace std;
class Passport
{
public:
	Passport(const string& fullName, const string& seria, const size_t& number, const Date& date, const Date& datePut);
	void setFullName(const string& fullName);
	void setDate(const Date& date);
	void setDateGive(const Date& date);
	void setNumber(const size_t& number);
	void setSeria(const string& seria);
	friend ostream& operator<<(ostream& ost, const Passport& obj);
private:
	struct PIB
	{
		friend class Passport;
		string firstName;
		string lastName;
		string fathername;
	};
	PIB fullName;
	string seria;
	size_t number;
	Date date;
	Date datePut;
};