#include "Location.h"
#include <string>
#include <iostream>

using namespace std;

Location::Location():
	Location{"Unknown","Unknown" ,"Unknown" } {}

Location::Location(std::string new_country, std::string new_city, std::string new_street) :
	country{ new_country }, city{ new_city }, street{ new_street } {
	amountOfLoc++;
}

Location::~Location() {}

string Location::getCountry() const
{
	return country;
}

string Location::getCity() const
{
	return city;
}

string Location::getStreet() const
{
	return street;
}

void Location::display() const
{
	cout << "����� : " << country << endl;
	cout << "̳��� : " << city << endl;
	cout << "������ : " << street << endl;
}

void Location::output() const{
	cout << "����� : " << country << endl;
	cout << "̳��� : " << city << endl;
	cout << "������ : " << street << endl;
}

Location::Location(const Location& location):
	country(location.country), city(location.city), street(location.street){}

Location::Location(Location&& location) noexcept:
	country{location.country}, city{location.city}, street{location.street}{}

int Location::amountOfLoc = 0;

int Location::getAmountOfLoc()
{
	return amountOfLoc;
}

Location& Location::operator=(const Location& rhs)
{
	if (this == &rhs) {
		return *this;
	}
	country = rhs.country;
	city = rhs.city;
	street = rhs.street;
	return *this;
}

ostream& operator<<(ostream& os, const Location& obj)
{
	os << "����� : " << obj.country << endl;
	os << "̳��� : " << obj.city << endl;
	os << "������ : " << obj.street << endl;
	return os;
}

istream& operator>>(istream& is, Location& obj)
{
	cout << "������ ����� - "; is >> obj.country;
	cout << "������ ���� - "; is >> obj.city;
	cout << "������ ������ - "; is >> obj.street;
	return is;
}
