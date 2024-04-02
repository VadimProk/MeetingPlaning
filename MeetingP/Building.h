#pragma once
#include "Location.h"
class Building : public Location {
private:
	string area;
public:
	Building();
	Building(string newArea);
	Building(string newCountry, string newCity, string newStreet, string newArea);
	~Building();
	Building& operator=(const Building& rhs);
	Building(const Building& other);
	Building(const Building&& other) noexcept;
	void display() const;

};

