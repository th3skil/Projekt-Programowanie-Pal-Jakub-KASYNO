#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <cstdlib>
#include <time.h>
#include <conio.h>
#include"Nag³ówek.h"
//#include "KASYNO (PROJEKT).h"
#pragma warning(disable : 4996)
#pragma warning(disable : 1075)
using namespace std;
void JednoRekiBandyta(int z)
{

    HANDLE hOut; // funkcja do kolorów//(uchwyt na wyjœcie konsoli).
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
    int tab[3] = { 9,9,9 };
    srand(time(NULL));
    int tab1[3] = {};
    cout << "                             JEDNO REKI BANDYTA!!!\n" << "twoj zak³ad kosztuje 50$ \na za trafienie 3 tych samych liczb\notrzymuje sie 1000 $, razy liczba jaka powtórzy³a sie";
    cout << "\n Przykladowo przy trafieniu trzech 6\ NA TWOJE KONTO PRZYBEDZIE 6000 $";

    while (true)
    {
        if (konto < 50)
        {
            cout << "\nmasz za malo pieniedzy :(\n Wroc do menu i popracuj!\n";
            cout << "nacisnij enter by wrócic do menu" << flush << endl << endl;
            getchar();
            system("cls");
            menu(0);
        }
        int z;
        konto -= 50;
        cout << "\nZagraj 1" << endl << "Exit 2" << endl;
        cin >> z;


        switch (z)
        {

        case 1:
        {
            for (int i = 0; i < 3; i++)
            {
                tab1[i] = rand() % 9 + 1;
                cout << tab1[i];
            }
            cout << endl;
            if ((tab1[0] == 9) && (tab1[1] == 9) && (tab1[2] == 9))
            {
                cout << "WYGRALES";
                (konto += 9000);
            }
            if ((tab1[0] == 8) && (tab1[1] == 8) && (tab1[2] == 8))
            {
                cout << "WYGRALES";
                (konto += 8000);
            }

            if ((tab1[0] == 7) && (tab1[1] == 7) && (tab1[2] == 7))
            {
                cout << "WYGRALES";
                (konto += 7000);
            }

            if ((tab1[0] == 6) && (tab1[1] == 6) && (tab1[2] == 6))
            {
                cout << "WYGRALES";
                (konto += 6000);
            }

            if ((tab1[0] == 5) && (tab1[1] == 5) && (tab1[2] == 5))
            {
                cout << "WYGRALES";
                (konto += 5000);
            }

            if ((tab1[0] == 4) && (tab1[1] == 4) && (tab1[2] == 4))
            {
                cout << "WYGRALES";
                (konto += 4000);
            }

            if ((tab1[0] == 3) && (tab1[1] == 3) && (tab1[2] == 3))
            {
                cout << "WYGRALES";
                (konto += 3000);
            }

            if ((tab1[0] == 2) && (tab1[1] == 2) && (tab1[2] == 2))
            {
                cout << "WYGRALES";
                (konto += 2000);
            }

            if ((tab1[0] == 1) && (tab1[1] == 1) && (tab1[2] == 1))
            {
                cout << "WYGRALES";
                (konto += 1000);

            }


            cout << "\nKonto gracza: " << konto << "$" << endl;

            break;
        }


        case 2:
        {

            // exit(0);
            system("cls");
            menu(0);
            break;
        }
        /*  default: {
              cout << "\n cos nie smiga: " << endl;
              break;
          }*/
        }

    }
    // return konto;


}