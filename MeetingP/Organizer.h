#pragma once
#include "Account.h"
#include "Event.h"
#include <iostream>
#include <vector>

class Organizer final : public Account {
private:
	vector<Event> eventList;
	bool edit¿ccess = true;
public:
	Organizer();
	Organizer(string new_name, int new_age, string new_sex);
	~Organizer();
	bool getAcces() const;
	void addEvent(const Event& event);
	void output() const override;
	void displayEvent();
};

