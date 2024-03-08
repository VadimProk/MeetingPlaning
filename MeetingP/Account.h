#pragma once
#include <string>
#include <iostream>
using namespace std;
class Account
{
private:
	static int amountOfAcc;
	string name;
	int age;
	string sex;
public:
	Account(string new_name, int new_age);
	Account(string new_name, int new_age, string new_sex);
	Account(const Account& account);
	Account(Account&& account) noexcept;
	~Account();
	static int getAmountOfAcc();
	string getName();
	int getAge();
	string getSex();
	void display();
	

};



