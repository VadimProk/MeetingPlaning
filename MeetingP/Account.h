#pragma once
#include <string>
#include <iostream>
using namespace std;
class Account
{
private:
	string name;
	int age;
	string sex;
public:
	Account(string new_name, int new_age);
	Account(string new_name, int new_age, string new_sex);
	~Account();
	string getName();
	int getAge();
	string getSex();
	void display();
};



