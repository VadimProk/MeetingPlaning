#include "Location.h"
#include <string>
#include <iostream>

using namespace std;

Location::Location(std::string new_country, std::string new_city, std::string new_street) :
	country{ new_country }, city{ new_city }, street{ new_street } {}

Location::~Location() {}

string Location::getCountry()
{
	return country;
}

string Location::getCity()
{
	return city;
}

string Location::getStreet()
{
	return street;
}

void Location::display()
{
	cout << "Країна : " << country << endl;
	cout << "Місто : " << city << endl;
	cout << "Вулиця : " << street << endl << endl;
}

Location::Location(const Location& location):
	country(location.country), city(location.city), street(location.street){}

Location::Location(Location&& location) noexcept:
	country{location.country}, city{location.city}, street{location.street}{}


