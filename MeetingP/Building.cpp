#include "Building.h"
#include <string>
#include <iostream>
using namespace std;

Building::Building() :
	Location{}, area{ "Unknown" } {};

Building::Building(string newCountry,string newCity,string newStreet,string newArea) :
	Location{ newCountry,newCity,newStreet }, area{ newArea } {}

Building::~Building() {}

Building& Building::operator=(const Building& rhs)
{
	if (this != &rhs) {
	Location::operator=(rhs);
	area = rhs.area;
	}
	return *this;
}

Building::Building(const Building& other): 
	Location(other),area{other.area}{}

Building::Building(const Building&& other) noexcept:
	Location(other),area{other.area}{}

void Building::display() const
{
	Location::display();
	cout << "Площа : " << area;
}


