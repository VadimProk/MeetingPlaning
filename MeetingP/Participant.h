#pragma once
#include "Account.h"
class Participant : public Account{
private:
	bool edit¿ccess = false;
public: 
	Participant();
	Participant(string new_name, int new_age, string new_sex);
	~Participant();
	bool getAcces() const;
	void output() const override;
};

