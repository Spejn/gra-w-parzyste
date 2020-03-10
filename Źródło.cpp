// gra w parzyste 1.2

#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;
unsigned Rzut;
int pn;
static int nLicznik = 10;
int obst;

void funkcjaplus()
{
	nLicznik += obst;
}
void funkcjaminus()
{
	nLicznik -= obst;
}
void funkcja1()
{
	
	
		//wylosowanie liczby
		srand((int)time(NULL));
		unsigned nWylosowana = rand();



		switch (pn)
		{
		case 1:
			if (nWylosowana % 2 != 0)
			{
				funkcjaplus();
				cout << "brawo" << endl << "Twoja liczba punktow to: " << nLicznik << endl;
			}
			else
			{
				funkcjaminus();
				cout << "niestety nie" << endl << "Twoja liczba punktow to: " << nLicznik << endl;
			} break;

		case 2:
			if (nWylosowana % 2 == 0)
			{
				funkcjaplus();
				cout << "brawo" << endl << "Twoja liczba punktow to: " << nLicznik << endl;
			}

			else
			{
				funkcjaminus();
				cout << "niestety nie" << endl << "Twoja liczba punktow to: " << nLicznik << endl; ;
			} break;

		default: cout << "nieznana opcja" << endl; break;

		}
		cout << endl << "Twoj wybor: ";
		cin >> pn;
		cout << endl << "ile obstawiasz: ";
		cin >> obst;
	

}

void main()
{
	cout << "parzyste czy nie?" << endl;
	cout << "wpisz 1- nieparzyste lub 2 parzyste" << endl << "poczatkowo masz 10 punktow - obstawiaj dowolne ilosci" << endl << "gra sie skonczy gdy zostanie Ci 0 punktow" << endl;
	

	
	while (nLicznik != 0)
	{
		cout << endl << "Twoj wybor: ";
		cin >> pn;
		cout << endl << "ile obstawiasz: ";
		cin >> obst;

		if (obst <= nLicznik)
			funkcja1();
		else
		{
			cout << "nie masz tylu punktow!" << endl << "sprobuj raz jeszcze:  ";
	
			
		}
	}
	_getch;
}