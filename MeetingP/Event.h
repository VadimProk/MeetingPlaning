#pragma once
#include <string>
#include <iostream>
using namespace std;
class Event
{
private:
	string name;
	int cost;
public:
	Event(string new_name);
	Event(string new_name, int new_cost);
	~Event();
	string getName();
	int getCost();
	void display();
};

