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
	cout << "����� : " << country << endl;
	cout << "̳��� : " << city << endl;
	cout << "������ : " << street << endl << endl;
}

