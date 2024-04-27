#include "Event.h"
#include <string>
#include <iostream>
using namespace std;

Event::Event() :
	Event{ "Unknown" } {}

Event::Event(string new_name) :
	Event{ new_name, 0,"Unknown","Unknown","Unknown" } {}

Event::Event(string new_name, int new_cost, string new_country, string new_city, string new_street) :
	name{ new_name }, cost{ new_cost }, location{ new_country,new_city,new_street } {
	amountOfEve++;
}

Event::~Event() {}

string Event::getName() const
{
	return name;
}

int Event::getCost() const
{
	return cost;
}

void Event::getLocate() const
{
	location.display();
}

void Event::display() const
{
	cout << "����� ��䳿 : " << name << endl;
	cout << "������� : " << cost << endl;
	location.display();


}

void Event::output() const{
	cout << "����� ��䳿 : " << name << endl;
	cout << "������� : " << cost << endl;
	location.output();
}

Event::Event(const Event& event) :
	name(event.name), cost(event.cost), location{ event.location } {}

Event::Event(Event&& event) noexcept :
	name{ event.name }, cost{ event.cost }, location{ event.location } {}

int Event::amountOfEve = 0;
int Event::getAmountOfEve()
{
	return amountOfEve;
}

Event& Event::operator=(const Event& rhs)
{
	if (this == &rhs) {
		return *this;
	}
	name = rhs.name;
	cost = rhs.cost;
	location = rhs.location;
	return *this;
}

ostream& operator<<(ostream& os, const Event& obj)
{
	os << "����� ��䳿 : " << obj.name << endl;
	os << "������� : " << obj.cost << endl;
	os << obj.location << endl;
	return os;
}

istream& operator>>(istream& is, Event& obj)
{
	cout << "������ ����� ��䳿 - "; is >> obj.name;
	cout << "������ ������� - "; is >> obj.cost;
	is >> obj.location;
	return is;
}
