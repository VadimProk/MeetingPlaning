#include "Organizer.h"
#include "Output.h"

Organizer::Organizer():
	Account{ "Unknown",0,"Unknown" } {}


Organizer::Organizer(string new_name, int new_age, string new_sex):
	Account{new_name, new_age, new_sex } {}

Organizer::~Organizer(){}

bool Organizer::getAcces() const {
	return true;
}

void Organizer::addEvent(const Event& event){
	eventList.push_back(event);
}

void Organizer::output() const {
	Account::output();
}

void Organizer::displayEvent(){
	for (const auto& event : eventList) {
		event.output();
		cout << "----------------";
	}
}


