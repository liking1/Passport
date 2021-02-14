#include "Passport.h"

Passport::Passport(const string& fullName, const string& seria, const size_t& number, const Date& date, const Date& dateGive)
{
	setFullName(fullName);
	setSeria(seria);
	setNumber(number);
	setDate(date);
	setDateGive(dateGive);
}

void Passport::setFullName(const string& fullName)
{

	size_t found = fullName.find(" ");
	if (found != string::npos) {
		this->fullName.lastName = fullName.substr(0, found);
		size_t oldFound = found + 1;
		found = fullName.find(" ", found + 1);
		if (found != string::npos) {
			this->fullName.firstName = fullName.substr(oldFound, found - 10);
			this->fullName.fathername = fullName.substr(found, fullName.length());
		}
	}
}

void Passport::setDate(const Date& date)
{
	this->date.setDate(date.getDay(), date.getMonth(), date.getYear());
}

void Passport::setDateGive(const Date& date)
{
	this->datePut.setDate(date.getDay(), date.getMonth(), date.getYear());
}

void Passport::setNumber(const size_t& number)
{
	string temp = to_string(number);
	if (temp.length() == 9)
	{
		this->number = number;
	}
}

void Passport::setSeria(const string& seria)
{
	if (seria.length() == 2) {
		this->seria = seria;
	}
}

ostream& operator<<(ostream& ost, const Passport& obj)
{
	ost << "Last Name : " << obj.fullName.lastName << endl;
	ost << "First Name : " << obj.fullName.firstName << endl;
	ost << "FatherName: " << obj.fullName.fathername << endl;
	ost << endl;
	ost << "Seria :" << obj.seria << endl;
	ost << "Number : " << obj.number << endl;
	ost << endl;
	ost << "Date of birth : " << obj.date << endl;
	ost << "Date passport give : " << obj.datePut << endl;
	return ost;
}