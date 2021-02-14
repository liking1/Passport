#pragma once
#include <iostream>
#include <string>

using namespace std;
class Date {
public:
    Date(const Date& date) {
        setDate(date.day, date.month, date.year);
    }

    Date(int d = 0, int m = 0, int y = 0) {
        setDate(d, m, y);
    }

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    void setDay(int day) {
        this->day = day;
    }

    void setMonth(int month) {
        this->month = month;
    }

    void setYear(int year) {
        this->year = year;
    }

    void setDate(int day, int month, int year) {
        if (isValidDate(day, month, year)) {
            setDay(day);
            setMonth(month);
            setYear(year);
        }
        else {
            throw string("Not valid date");
        }
    }

    void print() const {
        cout << day << '/'
            << month << '/'
            << year << endl;
    }

    static bool isValidDate(int day, int month, int year) {
        return true;
    }

    static bool isLeapYear(int year) {
        // Високосний
        return false;
    }

    static int dayInMonth(int month) {
        return 0;
    }
    friend ostream& operator<<(ostream& ost, const Date& obj) {
        ost << obj.day << '/'
            << obj.month << '/'
            << obj.year;
        return ost;
    }
private:
    int day;
    int month;
    int year;
};