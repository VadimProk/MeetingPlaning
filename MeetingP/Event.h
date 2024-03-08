#pragma once
#include <string>
#include <iostream>
using namespace std;
class Event
{
private:
	string name;
	int cost;
	static int amountOfEve;
public:
	Event(string new_name);
	Event(string new_name, int new_cost);
	Event(const Event& event);
	Event(Event&& event) noexcept;
	~Event();
	static int getAmountOfEve();
	string getName();
	int getCost();
	void display();
	
};

