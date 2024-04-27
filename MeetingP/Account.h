#pragma once
#include <string>
#include <iostream>
#include "Output.h"

using namespace std;
class Account : public Output
{
private:
	static int amountOfAcc;
	string name;
	int age;
	string sex;
public:
	Account();
	Account(string new_name, int new_age);
	Account(string new_name, int new_age, string new_sex);
	Account(const Account& account);
	Account(Account&& account) noexcept;
	~Account();
	static int getAmountOfAcc();
	string getName() const ;
	int getAge() const;
	string getSex() const;
	void display() const;
	void output() const override;
	friend ostream& operator<<(ostream& os, const Account& obj);
	friend istream& operator>>(istream& is, Account& obj);
	Account& operator=(const Account& rhs);

};



