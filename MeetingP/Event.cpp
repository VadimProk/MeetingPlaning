#include "Event.h"
#include <string>
#include <iostream>
using namespace std;

Event::Event(string new_name) :
	Event{ new_name, 0 } {}

Event::Event(string new_name, int new_cost) :
	name{ new_name }, cost{ new_cost } {}

Event::~Event() {}

string Event::getName()
{
	return name;
}

int Event::getCost()
{
	return cost;
}

void Event::display()
{
	cout << "����� ��䳿 : " << name << endl;
	cout << "������� : " << cost << endl << endl;

}

Event::Event(Event& event):
	name(event.name), cost(event.cost){}


