#include "Account.h"
#include <string>
#include <iostream>

using namespace std;

Account::Account()
	: Account{ "Unknown" , 0 } {}

Account::Account(string new_name, int new_age)
	: Account{ new_name, new_age ,"Unknown" } {}

Account::Account(string new_name, int new_age, string new_sex) :
	name{ new_name }, age{ new_age }, sex{ new_sex } {
	amountOfAcc++;
}

Account::~Account()
{}

string Account::getName() const
{
	return name;
}

int Account::getAge() const
{
	return age;
}

string Account::getSex() const
{
	return sex;
}

void Account::display() const
{
	cout << "Ім'я : " << name << endl;
	cout << "Вік : " << age << endl;
	cout << "Стать : " << sex << endl << endl;
}

Account::Account(const Account& account):
	name(account.name), age(account.age), sex(account.sex){}//CopyConstructor

Account::Account(Account&& account) noexcept :
	name{account.name}, age{account.age}, sex{account.sex}{}//MoveConstructor

int Account::amountOfAcc = 0;
int Account::getAmountOfAcc() {
	return amountOfAcc;
}

Account& Account::operator=(const Account& rhs)
{
	if (this == &rhs) {
		return *this;
	}
	name = rhs.name;
	age = rhs.age;
	sex = rhs.sex;
	return *this;
}

ostream& operator<<(ostream& os, const Account& obj)
{
	os << "Ім'я : " << obj.name << endl;
	os << "Вік : " << obj.age << endl;
	os << "Стать : " << obj.sex << endl;
	return os;
}

istream& operator>>(istream& is, Account& obj)
{	
	cout << "Введіть ім'я - "; is >> obj.name; 
	cout << "Введіть вік - "; is >> obj.age; 
	cout << "Введіть стать - "; is >> obj.sex; 
	return is;
}