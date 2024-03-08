#pragma once
#include <iostream>
#include <string>

using namespace std;

class Location {
private:
	string country;
	string city;
	string street;
public:
	Location(std::string new_country, std::string new_city, std::string new_street);
	~Location();
	string getCountry();
	string getCity();
	string getStreet();
	void display();
	Location(Location& location);
};

