#pragma once
#include <iostream>
#include <string>
#include "Output.h"

using namespace std;

class Location : public Output {
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
	virtual ~Location();
	static int getAmountOfLoc();
	string getCountry() const;
	string getCity() const;
	string getStreet() const;
	virtual void display() const;
	void output() const override;
	friend ostream& operator<<(ostream& os, const Location& obj);
	friend istream& operator>>(istream& is, Location& obj);
	Location& operator=(const Location& rhs);
	
};

