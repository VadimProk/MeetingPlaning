#include "Account.h"
#include <string>
#include <iostream>

using namespace std;

Account::Account(string new_name, int new_age)
	: Account{ new_name, new_age ,"Unknown" } {}

Account::Account(string new_name, int new_age, string new_sex) :
	name{ new_name }, age{ new_age }, sex{ new_sex } {}
Account::~Account()
{}

string Account::getName()
{
	return name;
}

int Account::getAge()
{
	return age;
}

string Account::getSex()
{
	return sex;
}

void Account::display()
{
	cout << "Ім'я : " << name << endl;
	cout << "Вік : " << age << endl;
	cout << "Стать : " << sex << endl << endl;
}
