#include "Date.hpp"

Date::InvalidDate(const std::string& text) : text(text) {
    this->text = text;
}

void Date::validate(int day, int month, int year) {
    if ( month < 0 || month > 12 ) {
        throw InvalidDate();
    }

    if ( day < 0 || day > 31 ) {
        throw InvalidDate();
    }

    if ( month == 2 && (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0) ) {
        if ( day > 29 ) {
            throw InvalidDate();
        }
    }
}

Date::Date(int day=1, int month=1, int year=1970) {
    this->day = day;
    this->month = month;
    this->year = year;
}
Date::~Date() {}

int Date::getDay() const {
    return this->day;
}

int Date::getMonth() const {
    return this->month;
}

int Date::getYear() const {
    return this->year;
}

std::ostream& operator<<(std::ostream& out, const Date& date) {
    out << '|' << date.getDay() << "/" << date.getMonth() << '/' << date.getYear() << '|';
    return out;
}
