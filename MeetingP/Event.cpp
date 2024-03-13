#include "Event.h"
#include <string>
#include <iostream>
using namespace std;

Event::Event():
	Event{"Unknown"} {}

Event::Event(string new_name) :
	Event{ new_name, 0 } {}

Event::Event(string new_name, int new_cost) :
	name{ new_name }, cost{ new_cost } {
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

void Event::display() const
{
	cout << "Назва події : " << name << endl;
	cout << "Вартість : " << cost << endl << endl;

}

Event::Event(const Event& event):
	name(event.name), cost(event.cost){}

Event::Event(Event&& event) noexcept :
	name{event.name}, cost{event.cost}{}

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
	return *this;
}

ostream& operator<<(ostream& os, const Event& obj)
{
	os << "Назва події : " << obj.name << endl;
	os << "Вартість : " << obj.cost << endl;
	return os;
}

istream& operator>>(istream& is, Event& obj)
{
	cout << "Введіть назву події - "; is >> obj.name;
	cout << "Введіть вартість - "; is >> obj.cost;
	return is;
}
