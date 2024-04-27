#include "Participant.h"

Participant::Participant():
	Account{ "Unknown",0,"Unknown" } {}

Participant::Participant(string new_name, int new_age, string new_sex):
	Account{ new_name, new_age, new_sex } {}

Participant::~Participant() {}

bool Participant::getAcces() const{
	return false;
}

void Participant::output() const{
	Account::output();
}
