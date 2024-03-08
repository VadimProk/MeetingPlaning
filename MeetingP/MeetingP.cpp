#include <iostream>
#include <string>
#include <Windows.h>
#include "Location.h"
#include "Account.h"
#include "Event.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Location Che{ "Ukraine","Chernivtci","Golovna" };
	Account Bob{ "Bob", 20 };
	Event Party{ "Party", 120 };

	Account David{ "David",13 };

	Che.display();
	Bob.display();
	Party.display();

	Account CopyAcc(Bob);
	Location CopyChe(Che);
	Event CopyP(Party);

	CopyChe.display();
	CopyP.display();
	CopyAcc.display();
	
	cout << Location::getAmountOfLoc() << endl;
	cout << Account::getAmountOfAcc() << endl;
	cout << Event::getAmountOfEve() << endl;
	

	return 0;
}

