#include "pch.h"
#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
string gra = "         ", gracz;
int znak, kordy, pamiecK, i = 0;
char pamiec, symbol, sk = 'x', s;
bool decyzja = false;
													
void tablica()
{
	cout << "Twoj znak: " << symbol << endl;
	cout << "_________" << endl << "| " << gra[0] << " " << gra[1] << " " << gra[2] << " |" << endl;
	cout << endl << "| " << gra[3] << " " << gra[4] << " " << gra[5] << " |" << endl;
	cout << endl << "| " << gra[6] << " " << gra[7] << " " << gra[8] << " |" << endl << "=========" << endl;
}
void sterowanie()
{
	if (znak == 72)
	{
		kordy = kordy - 3;
	}
	else if (znak == 80)
	{
		kordy = kordy + 3;
	}
	else if (znak == 75)
	{
		kordy = kordy - 1;
	}
	else if (znak == 77)
	{
		kordy = kordy + 1;
	}
	if (kordy < 0 || kordy>8)
	{
		kordy = 0;
	}
}
void badanie()
{
	if (gra[4] == gra[0] && decyzja == false && gra[8] == ' '&&gra[4] == s)
	{
		decyzja = true;
		gra[8] = sk;
	}
	if (gra[4] == gra[1] && decyzja == false && gra[7] == ' '&&gra[4] == s)
	{
		decyzja = true;
		gra[7] = sk;
	}
	if (gra[4] == gra[2] && decyzja == false && gra[6] == ' '&&gra[4] == s)
	{
		decyzja = true;
		gra[6] = sk;
	}
	if (gra[4] == gra[3] && decyzja == false && gra[5] == ' '&&gra[4] == s)
	{
		decyzja = true;
		gra[5] = sk;
	}
	if (gra[4] == gra[5] && decyzja == false && gra[3] == ' '&&gra[4] == s)
	{
		decyzja = true;
		gra[3] = sk;
	}
	if (gra[4] == gra[6] && decyzja == false && gra[2] == ' '&&gra[4] == s)
	{
		decyzja = true;
		gra[2] = sk;
	}
	if (gra[4] == gra[7] && decyzja == false && gra[1] == ' '&&gra[4] == s)
	{
		decyzja = true;
		gra[1] = sk;
	}
	if (gra[4] == gra[8] && decyzja == false && gra[0] == ' '&&gra[4] == s)
	{
		decyzja = true;
		gra[0] = sk;
	}

	if (gra[0] == gra[1] && gra[2] == ' '&&decyzja == false && gra[0] == s)
	{
		gra[2] = sk;
		decyzja = true;
	}
	if (gra[0] == gra[2] && gra[1] == ' '&&decyzja == false && gra[0] == s)
	{
		gra[1] = sk;
		decyzja = true;
	}
	if (gra[0] == gra[3] && gra[6] == ' '&&decyzja == false && gra[0] == s)
	{
		gra[6] = sk;
		decyzja = true;
	}
	if (gra[0] == gra[6] && gra[3] == ' '&&decyzja == false && gra[0] == s)
	{
		gra[3] = sk;
		decyzja = true;
	}
	if (gra[2] == gra[5] && gra[8] == ' '&&decyzja == false && gra[2] == s)
	{
		gra[8] = sk;
		decyzja = true;
	}
	if (gra[2] == gra[8] && gra[5] == ' '&&decyzja == false && gra[2] == s)
	{
		gra[5] = sk;
		decyzja = true;
	}
	if (gra[6] == gra[7] && gra[8] == ' '&&decyzja == false && gra[6] == s)
	{
		gra[8] = sk;
		decyzja = true;
	}
	if (gra[6] == gra[8] && gra[7] == ' '&&decyzja == false && gra[6] == s)
	{
		gra[7] = sk;
		decyzja = true;
	}
	if (gra[7] == gra[8] && gra[6] == ' '&&decyzja == false && gra[7] == s)
	{
		gra[6] = sk;
		decyzja = true;
	}
}
void czyWygrana()
{
	if ((gra[0] == gra[1]) && (gra[0] == gra[2]))
	{
		if (gra[0] == sk)
		{
			cout << "Koniec gry" << endl << "Wygrala maszyna!";
			i = 11;
		}
		else if (gra[0] == symbol)
		{
			cout << "Gratulacje, wygrales/as: " << gracz;
			i = 11;
		}
	}
	if ((gra[3] == gra[4]) && (gra[4] == gra[5]))
	{
		if (gra[3] == sk)
		{
			cout << "Koniec gry" << endl << "Wygrala maszyna!";
			i = 11;
		}
		else if (gra[3] == symbol)
		{
			cout << "Gratulacje, wygrales/as: " << gracz;
			i = 11;
		}
	}
	if ((gra[6] == gra[7]) && (gra[7] == gra[8]))
	{
		if (gra[6] == sk)
		{
			cout << "Koniec gry" << endl << "Wygrala maszyna!";
			i = 11;
		}
		else if (gra[6] == symbol)
		{
			cout << "Gratulacje, wygrales/as: " << gracz;
			i = 11;
		}
	}
	if ((gra[0] == gra[3]) && (gra[3] == gra[6]))
	{

		if (gra[0] == sk)
		{
			cout << "Koniec gry" << endl << "Wygrala maszyna!";
			i = 11;
		}
		else if (gra[0] == symbol)
		{
			cout << "Gratulacje, wygrales/as: " << gracz;
			i = 11;
		}
	}
	if ((gra[1] == gra[4]) && (gra[4] == gra[7]))
	{

		if (gra[1] == sk)
		{
			cout << "Koniec gry" << endl << "Wygrala maszyna!";
			i = 11;
		}
		else if (gra[1] == symbol)
		{
			cout << "Gratulacje, wygrales/as: " << gracz;
			i = 11;
		}
	}
	if ((gra[2] == gra[5]) && (gra[5] == gra[8]))
	{

		if (gra[2] == sk)
		{
			cout << "Koniec gry" << endl << "Wygrala maszyna!";
			i = 11;
		}
		else if (gra[2] == symbol)
		{
			cout << "Gratulacje, wygrales/as: " << gracz;
			i = 11;
		}
	}
	if ((gra[0] == gra[4]) && (gra[4] == gra[8]))
	{

		if (gra[0] == sk)
		{
			cout << "Koniec gry" << endl << "Wygrala maszyna!";
			i = 11;
		}
		else if (gra[0] == symbol)
		{
			cout << "Gratulacje, wygrales/as: " << gracz;
			i = 11;
		}
	}
	if ((gra[2] == gra[4]) && (gra[4] == gra[6]))
	{
		if (gra[2] == sk)
		{
			cout << "Koniec gry" << endl << "Koniec gry, Wygrala maszyna!";
			i = 11;
		}
		else if (gra[2] == symbol)
		{
			cout << "Gratulacje, wygrales/as: " << gracz;
			i = 11;
		}
	}
}

int main()
{
	//Data rozpoczecia 08102018
	int a = 1;
	char wybor;
	bool zakonczenie = false;
	cout << "Witaj w grze kolko(o) krzyzyk(x)" << endl << "Autor: Maciej Dobrowolski" << endl << "Podaj swoja nazwe graczu: ";
	cin >> gracz;
	cout << "Witaj " << gracz << ", bedziesz gral z komputrem..." << endl << " Wybierz czym chcesz grac." << endl << "Wpisz 'o' lub 'x': ";
	cin >> symbol;
	while (symbol != 'x' && symbol != 'o')
	{
		cout << "Mozesz wybrac jedynie x lub o!" << endl << "Podaj jeszce raz: ";
		cin >> symbol;
	}
	cout << "Przypisano tobie: " << symbol << endl;
	if (symbol == 'x')
	{
		sk = 'o';
	}
	cout << gracz << " czy chcesz zaczac gre? (y/n)";
	cin >> wybor;
	while (wybor != 'y' && wybor != 'n')
	{
		cout << "Mozesz wybrac jedynie y (tak) lub n (nie)!" << endl << "Podaj jeszce raz: ";
		cin >> wybor;
	}
	if (wybor == 'y')
	{
		
		system("cls");
		cout << "Zaczynasz, steruj strzalkami, chcesz postawic znak -> nacisnij enter"<<endl;
		tablica();
		do
		{
			znak = 1;
			kordy = 0;
			while (znak != 13)
			{
				znak = _getch();
				sterowanie();
				pamiec = gra[kordy];
				gra[kordy] = '#';
				system("cls");
				tablica();
				gra[kordy] = pamiec;
			}
			if (gra[kordy] != ' ')
			{
				cout << "Pole zajete" << endl;
				system("pause");
			}
			else
			{
				gra[kordy] = symbol;
				czyWygrana();
				i++;
				if (i < 9)
				{
					s = sk;
					badanie();
					s = symbol;
					badanie();
					if (gra[4] == ' '&&decyzja == false)
					{
						gra[4] = sk;
						decyzja = true;
					}
					if (decyzja == false)
					{
						int j = 0;
						while (gra[j] != ' ')
						{
							j++;
						}
						gra[j] = sk;
						decyzja = true;
					}
					system("cls");
					tablica();
					decyzja = false;
				}
				czyWygrana();
				i++;
			}
		} while (i < 9);
		system("cls");
		tablica();
		czyWygrana();
		if (i == 10)
		{
			cout << "Wyglada na remis" << endl;
		}
	}
	else
	{
		system("cls");
		cout << "Steruj strzalkami, chcesz postawic znak -> nacisnij enter" << endl;
		gra[6] = sk;
		tablica();
		do
		{
			znak = 1;
			kordy = 0;
			while (znak != 13)
			{
				znak = _getch();
				sterowanie();
				pamiec = gra[kordy];
				gra[kordy] = '#';
				system("cls");
				tablica();
				gra[kordy] = pamiec;
			}
			if (gra[kordy] != ' ')
			{
				cout << "Pole zajete" << endl;
				system("pause");
			}
			else
			{
				gra[kordy] = symbol;
				czyWygrana();
				i++;
				if (i < 9)
				{
					s = sk;
					badanie();
					s = symbol;
					badanie();
					if (gra[4] == symbol && gra[2] == ' '&&decyzja == false)
					{
						gra[2] = sk;
						decyzja = true;
					}
					if (gra[3] == symbol && gra[7] == symbol && gra[4] == ' '&& decyzja == false)
					{
						gra[4] = sk;
						decyzja = true;
					}
					if (gra[0] == ' ' && gra[3] != symbol && decyzja == false)
					{
						gra[0] = sk;
						decyzja = true;
					}
					else if (gra[8] == ' '&& decyzja == false)
					{
						gra[8] = sk;
						decyzja = true;
					}
					if (decyzja == false)
					{
						int j = 0;
						while (gra[j] != ' ')
						{
							j++;
						}
						gra[j] = sk;
						decyzja = true;
					}
					system("cls");
					tablica();
					decyzja = false;
				}
				czyWygrana();
				i++;
			}
		} while (i < 8);
		system("cls");
		tablica();
		czyWygrana();
		if (i == 8)
		{
			cout << "Wyglada na remis" << endl;
		}
	}
	cout <<endl<< "Grales/as w Kolko Krzyzyk autorstwa Macieja D." << endl << "Pozdrawiam";
}