#pragma once
#include <string>
#include <iostream>
#include "Location.h"
#include "Building.h"

using namespace std;
class Event
{
private:
	string name;
	int cost;
	static int amountOfEve;
	Location location;
public:
	Event();
	Event(string new_name);
	Event(string new_name, int new_cost, string new_country, string new_city, string new_street);
	Event(const Event& event);
	Event(Event&& event) noexcept;
	~Event();
	static int getAmountOfEve();
	string getName() const;
	int getCost() const;
	void display() const;
	friend ostream& operator<<(ostream& os, const Event& obj);
	friend istream& operator>>(istream& is, Event& obj);
	Event& operator=(const Event& rhs);
};

