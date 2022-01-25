#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <cstdlib>
#include <time.h>
#include <conio.h>
#include"Nagłówek.h"
//#include "KASYNO (PROJEKT).h"
#pragma warning(disable : 4996)
#pragma warning(disable : 1075)

using namespace std;

int konto = 1000;

int main()
{
    int k{};
    char wybor1, w2{};
    string nazwa;
    HANDLE hOut; // funkcja do kolorów//(uchwyt na wyjście konsoli).
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    cout << "" << endl;
    SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout << "                          WITAJ W KASYNIE                         \nZycze milej gry oraz prosze o zapoznanie sie z regulaminem rogrywki :)" << endl;
    SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_RED);
    cout << "Czy chcesz zapoznac sie z regulaminem?\nWybierz opcje 1=tak lub 2=nie " << endl;
    wybor1 = _getch();
    switch (wybor1)
    {
    case '1':
        cout << "********************\nRegulamin rozgrywki:\n********************\nGlowna i jedyna zasada to dobra zabawa! :)))))\n Gdy zapoznasz sie z regulaminem mozesz \n" << "nacisnac enter by kontynuowac" << flush << endl << endl;
        break;
    case '2':
        cout << "DOBRZE REGULAMIN JEST NIE POTRZEBNY MASZ RACJE -__-\njezeli nie potrzebujesz regulaminu \n" << "nacisnij enter by kontynuowac" << flush << endl << endl;
        break;
    }
    getchar();
    system("cls");

    SetConsoleTextAttribute(hOut, BACKGROUND_RED);
    cout << "pora na podanie nazwy uzytkownika, \nspokojnie nie musisz podawac swojego imienia i nazwiska\ndo kredytu potrzebowalbym calego dowodu :(\nwystarczy nazwa wymyslona przez ciebie :)\n jak np SUPERKOT123\n";
    cout << "twoja nazwa:" << flush << endl;
    cin >> nazwa;
    SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout << "nacisnij enter by kontynuowac" << flush << endl << endl;
    getchar();
    system("cls");
    SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "Dobrze zatem nazywasz sie: " << nazwa << " fajnie calkiem przyjemnie,\n dobrze od teraz bede zwracac sie do ciebie " << nazwa << "." << flush << endl << endl;
    SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout << "nacisnij enter by kontynuowac" << flush << endl << endl;
    getchar();
    system("cls");
    SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "ZACZNIJMY POZNAWAC OFERTE NASZEGO KASYNA ;)\n mam nadzieje ze jestes gotowy " << nazwa << "\nw naszym kasynie masz do wyboru 3 gry w ktorych mozesz wygrac pieniadze\ndo wyboru sa nastepujace gry:\n";
    SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout << "1) JEDNO REKI BADYTA :O" << endl << endl;
    SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "2) RULETKA :O " << endl << endl;
    SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE);
    cout << "3) LOTTO :O" << endl << endl;
    SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout << "widzisz " << nazwa << " przed toba calkiem ciekawy wybor gier..." << endl;
    cout << "Dobrze, zanim zapoznasz sie z zasadami mini gierek w naszym kasynie" << endl;
    cout << "chcialbym cie poinformowac, ze posiadasz konto na ktorym sa zarobione pieniadze.\nKazdy nowy gracz dostaje 1000 $";
    cout << "by podkrecic mozliwosc wygranej w naszym kasynie.\nW razie braku gotowki mozesz popracowac w manu kasyna :)\n" << endl;
    cout << "\n STAN KONTA WYNOSI: " << konto << "$\n\n";
    SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout << "nacisnij enter by kontynuowac" << flush << endl << endl;
    getchar();
    system("cls");
    cout << "Wiemy juz jak sie nazywasz i ile masz pieniedzy na koncie,\npoznajmy zatem gry w ktorych mozesz wygrac ogromne pieniadze\n";
    cout << "Dowiedz sie wiecej o grze : ";
    SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout << "\n1)JEDNO REKI BADYTA :O" << endl << endl;
    SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "2) RULETKA :O " << endl << endl;
    SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE);
    cout << "3) LOTTO :O" << endl << endl;
    SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);


    SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout << "JEDNO REKI BANDYTA - to gra dla ludzi o stalowych nerwach,\n gra polega na losowaniu losowych  liczb (3)\nz roznymi bonusami w zaleznosci od liczby jaka zostala wylosowana\n ";
    SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "RULETKA - to dobry sposob na odkucie sie,\n gra polega na zalozeniu ze  pileczka wyladuje na danym polu\n kazde pole ma swoj mnoznik,\n mozna tez obstawic kolor\n";
    SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE);
    cout << "LOTTO -  gra o najmniejszym prawdopodobienstwu powodzenia\n lecz o najwiekszych nagrodach,\n gra polega na obstawieniu 6 cyfr\n i liczeniu na to,\n ze liczby beda takie same jak \nwylosowane przez maszyne losujaca\n (kazda liczba =1000$)\n";
    cout << "nacisnij enter by kontynuowac" << flush << endl << endl;
    getchar();
    system("cls");
    while (1)
        menu(w2);

    system("pause");


}

void  Lotto()
{
    HANDLE hOut; // funkcja do kolorów//(uchwyt na wyjście konsoli).
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE);
    if (konto < 1200)
    {
        cout << "\n zakład kosztuje 1200$ masz za malo pieniedzy :(\n Wroc do menu i popracuj!\n";
        cout << "nacisnij enter by wrocic do menu" << flush << endl << endl; //sytuacja w ktorej nie masz funduszy (wracasz do menu)
        getchar();
        system("cls");
        menu(0);
    }


    int kupon[6];
    cout << "Podaj 6 roznych liczb z zakresu od 1 - 49" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "Podaj " << i + 1 << " liczbe:";    //pobranie od uzytkownika zakladu
        cin >> kupon[i];

    }

    srand(time(NULL));
    int los[6];
    bool powtorzenia;
    for (int i = 0; i < 6; i++)
    {
        powtorzenia = true;             //losowanie numerow lotto 
        while (powtorzenia)
        {
            powtorzenia = false;
            los[i] = rand() % 49 + 1;
            for (int j = 0; j < i; j++)
                if (los[i] == los[j])
                {
                    powtorzenia = true;                 //petla sprawdzajaca powtorzenia 
                    break;
                }

        }

    }
    cout << "WYLOSOWANE LICZBY TO: " << endl << endl;
    for (int i = 0; i < 6; i++)
        cout << los[i] << " ";                          //sprawszanie liczb  i kuponu :)
    int licznik = 0;
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            if (kupon[i] == los[j])
            {
                licznik++;
                break;
            }
    if (licznik >= 1)
    {
        konto += (1000 * licznik) - 1200;
        cout << "\n\nBARDZO DOBRY TRAF!!! " << licznik << " LICZB trafionych\n";     //jedna trafiona liczba jest = 1000 $
    }
    else if (licznik == 0)
    {
        konto -= 1200;
        cout << " nie udalo ci sie tym razem sprobuj ponownie nastepnym razem!!!" << endl;
    }



    SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY); // kolorki 
    cout << "nacisnij enter by kontynuowac" << flush << endl << endl;
    getchar(); getchar();
    system("cls");                                                                                      //powrot do menu wyczyszczenie konsoli
    menu(0);

}
void JednoRekiBandyta(int z)
{

    HANDLE hOut; // funkcja do kolorów//(uchwyt na wyjście konsoli) inicjalizacja kolorow.
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
    int tab[3] = { 9,9,9 };                                                                 
    srand(time(NULL));                  //tablice  
    int tab1[3] = {};
    cout << "                             JEDNO REKI BANDYTA!!!\n" << "twoj zaklad kosztuje 50$ \na za trafienie 3 tych samych liczb\notrzymuje sie 1000 $, razy liczba jaka powtorzyla sie";
    cout << "\n Przykladowo przy trafieniu trzech 6\ NA TWOJE KONTO PRZYBEDZIE 6000 $";

    while (true)
    {
        if (konto < 50)
        {
            cout << "\nmasz za malo pieniedzy :(\n Wroc do menu i popracuj!\n";
            cout << "nacisnij enter by wrocic do menu" << flush << endl << endl; //brak srodkow cofniecie do menu.
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
                tab1[i] = rand() % 9 + 1;            // losowanie liczb do tablicy :)
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
                cout << "WYGRALES";                                                     //sprawdzenie wygranej :)
                (konto += 2000);
            }

            if ((tab1[0] == 1) && (tab1[1] == 1) && (tab1[2] == 1))
            {
                cout << "WYGRALES";
                (konto += 1000);

            }


            cout << "\nKonto gracza: " << konto << "$" << endl; //konto 

            break;
        }


        case 2:
        {

            // exit(0);
            system("cls");
            menu(0);             //powrot do menu 
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
void menu(char w2)
{
    HANDLE hOut;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    do
    {
        SetConsoleTextAttribute(hOut, BACKGROUND_GREEN);
        cout << "****************************************************\n";
        SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);       // kolorki :)
        cout << "                     K";
        SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout << "A";
        SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        cout << "S";
        SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_RED);
        cout << "Y";
        SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout << "N";
        SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        cout << "O                           \n";
        SetConsoleTextAttribute(hOut, BACKGROUND_GREEN);
        cout << "****************************************************\n";
        SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE);
        cout << "STAN TWOJEGO KONTA WYNOSI:" << konto << endl << endl;
        SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout << "1) JEDNO REKI BANDYTA \n";
        SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        cout << "2) RULETKA \n";
        SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE);
        cout << "3) LOTTO \n";
        SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout << "\n4) ZAKONCZ ZABAWE\n\n";
        SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        cout << "5) PRACA\n";
        int k{};
        w2 = getch();    // wybieranie w menu
        switch (w2)
        {
        case '1':

            JednoRekiBandyta(k);

            break;
        case '2':
            Ruletka();

            break;
        case'3':

            Lotto();
            break;
        case '4':
            exit(0);    //zakonczenie programu
            break;

        case '5':
            PRACA();
            break;



        }
    } while (w2);

}
void PRACA()
{
    char work{};


    cout << "\npracuj(1) lub wroc do gry!(2)\n";


    while (true)
    {
        work = _getch();
        switch (work)
        {
        case '1':
        {
            cout << "zarobiles 10 $!!!\n";
            konto += 10;                                                           //zarobek (szybki zeby mozna było dalej grac)
            break;
        }
        case'2':
        {
            system("cls");
            menu(0);
                                                    //powrot do menu
        }
        }
    }

}
void Ruletka()
{

    srand(time(NULL));
    HANDLE hOut; // funkcja do kolorów//(uchwyt na wyjście konsoli).
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);         //kolorki

    int numer{};

    SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    int liczba = rand() % 36 + 1;
    double zakład;
    cout << "************************************************\n";
    cout << "                                    RULETKA\n";
    cout << "************************************************\n";
   
    cout << "Podaj za ile pieniedzy stawaisz:";
    cin >> zakład;
    if (zakład > konto)
    {
        cout << "\nWroc z pieniedzmi\n";                                                        //brak srodkow.
        cout << "nacisnij enter by wrocic do menu\n" << flush << endl << endl;
        getchar(); getchar();
        system("cls");      //powrot do menu
        menu(0);
    }
    int l{};
    cout << "\nwybierz czy obstawiasz kolor(2) czy liczbe(1)" << endl;

    char k = _getch();
    switch (k) 
    {
    case'1':
    {

        konto -= zakład;
        cout << "Obstaw liczbe od 0-36 \ni sprawdz czy wygrales" << endl;
        cin >> numer;
        cout << "wylosowana liczba to:" << liczba << endl;                          //zaklad na liczbe 
        if (numer == liczba)
        {

            cout << "\n BRAWO KULA WYPADLA NA POLU O  WYBRANYM NUMERZE TWOJ ZAKLAD MNOZY SIE RAZY 34 ";
            konto += zakład * 34;




        }
        

        else if (numer != liczba)
        {
            cout << "nie udalo sie trafic moze nastepnym razem : )\n\n\n ";
        }
        break;
    }
        case'2':
        {
            cout << "\nObstaw kolor 1 - czarny, 2 - czerwony albo 3 - zielony\n";       //zaklad na kolory
            cin >> l;
            if ((liczba == 0)&&(l==3))
            {
                cout << "wylosowana liczba to:" << liczba << endl;
                cout << "BRAWO WYGRALES ZAKLAD RAZY 34\n";
                konto += zakład * 34;
            }
            else if ((liczba%2==0) && (liczba!=0)&&(l==2))
            {
                cout << "wylosowana liczba to:" << liczba << endl;                  //sprawdzanie kolorow
                cout << "Brawo liczba wypadla na czerwonym\n";
                cout << "\ntwoj zaklad mnozy sie razy 2\n";
                konto += zakład * 2;
            }
            else if ((liczba%2==1) && (l==1))
            {
                cout << "wylosowana liczba to:" << liczba << endl;
                cout << "Brawo liczba wypadla na czarnym";
                cout << "\ntwoj zaklad mnozy sie razy 2\n";
                konto += zakład * 2;
            }
            else
            {
                cout << "\nwylosowana liczba to:" << liczba << endl;
                cout << "\nniestety sie nie udalo :(\n";
            }
        }

    }
      

    cout << "nacisnij enter by wrocic do menu" << flush << endl << endl;
    getchar(); getchar();                                                   //powrot do menu
    system("cls");
    menu(0);

}


