#pragma once
#include <iostream>
#include <string>

using namespace std;

class Location {
private:
	string country;
	string city;
	string street;
	static int amountOfLoc;
public:
	Location();
	Location(std::string new_country, std::string new_city, std::string new_street);
	Location(const Location& location);
	Location(Location&& location) noexcept;
	~Location();
	static int getAmountOfLoc();
	string getCountry() const;
	string getCity() const;
	string getStreet() const;
	void display() const;
	friend ostream& operator<<(ostream& os, const Location& obj);
	friend istream& operator>>(istream& is, Location& obj);
	Location& operator=(const Location& rhs);
	
};

