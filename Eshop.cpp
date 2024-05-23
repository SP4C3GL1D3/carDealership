#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>

using namespace std;

bool pravda = true;

class Eshop {
public:
    string volneMisto = { "" };
    string toyota = { "1 | Toyota Corolla AE86 (panda) - 15 000 $" };
    string mitsubishi = { "2 | Mitsubishi 3000GT VR4 (green) - 25 000 $" };
    string honda = { "3 | Honda S2000 (yellow) - 22 000 $" };
    string celica = { "4 | Toyota Celica (red) - 12 000 $" };
    string ford = { "5 | Ford focus (silver) - 10 000 $" };
    string prelude = { "6 | Honda Prelude (black) - 5 000 $" };
    string ram = { "7 | RAM 2500 (dark green) - 30 000 $" };
    string rav = { "8 | Toyota RAV4 (dark blude) - 21 000 $" };
    string cr = { "9 | Honda CR-V (dark blue) - 9 000 $" };
    string sentra = { "10 | Nissan Sentra (light blue) - 8 000 $" };
    string camry = { "11 | Toyota Camry (light green) - 16 000 $" };
    string tesla = { "12 | Tesla model Y (green) - 18 500 $" };
    string hilux = { "13 | Toyota Hilux (white) - 19 999 $" };
    string civic = { "14 | Honda Civic Type R (black) - 28 000 $" };
    string eclipse = { "15 | Mitsubishi Eclipse (black) - 22 000 $" };
    string nissan = { "16 | Nissan Skyline r34 (red) - 12 000 $" };

    string REZERVACE = { "27.5. 2025 - Honda s2000" };
    string volnarezervace[4] = {"Toyota Corolla AE86 (panda)", "Nissan 180sx (Sleighty)", "Mitsubishi 3000GT VR4"};

    void nadpis()
    {
        cout << "                               _____             __           " << endl;
        cout << "    /\\        /\\        /\\     |  __ \\           | |          " << endl;
        cout << "   /  \\      /  \\      /  \\    | |  | | ___  __ _| | ___ _ __ " << endl;
        cout << "  / /\\ \\    / /\\ \\    / /\\ \\   | |  | |/ _ \\/ _` | |/ _ \\ '__|" << endl;
        cout << " / ____ \\  / ____ \\  / ____ \\  | |__| |  __/ (_| | |  __/ |   " << endl;
        cout << "/_/    \\_\\/_/    \\_\\/_/    \\_\\ |_____/ \\___|\\__,_|_|\\___|_|   " << endl;
        cout << "                                                               " << endl;
    }

    void firma()
    {
        cout << "! VÝTEJTE V AUTO BAZARU ČERNÝ !" << endl << endl << endl;
    }

    void textak() {
        ofstream AUTA("nabidka_aut.txt");

        if (!toyota.empty())
            AUTA << toyota << endl;
        if (!mitsubishi.empty())
            AUTA << mitsubishi << endl;
        if (!honda.empty())
            AUTA << honda << endl;
        if (!celica.empty())
            AUTA << celica << endl;
        if (!ford.empty())
            AUTA << ford << endl;
        if (!prelude.empty())
            AUTA << prelude << endl;
        if (!ram.empty())
            AUTA << ram << endl;
        if (!rav.empty())
            AUTA << rav << endl;
        if (!cr.empty())
            AUTA << cr << endl;
        if (!sentra.empty())
            AUTA << sentra << endl;
        if (!camry.empty())
            AUTA << camry << endl;
        if (!tesla.empty())
            AUTA << tesla << endl;
        if (!hilux.empty())
            AUTA << hilux << endl;
        if (!civic.empty())
            AUTA << civic << endl;
        if (!eclipse.empty())
            AUTA << eclipse << endl;
        if (!nissan.empty())
            AUTA << nissan << endl;
        if (!volneMisto.empty())
            cout << endl;
            AUTA << volneMisto << endl << endl;
        AUTA.close();

        ifstream AUTA_read("nabidka_aut.txt");

        string line;
        while (getline(AUTA_read, line))
        {
            cout << line << endl;
        }
        AUTA_read.close();
    }

    void removeCar(int volbicka)
    {
        switch (volbicka)
        {
        case 1:
            toyota = "";
            break;
        case 2:
            mitsubishi = "";
            break;
        case 3:
            honda = "";
            break;
        case 4:
            celica = "";
            break;
        case 5:
            ford = "";
            break;
        case 6:
            prelude = "";
            break;
        case 7:
            ram = "";
            break;
        case 8:
            rav = "";
            break;
        case 9:
            cr = "";
            break;
        case 10:
            sentra = "";
            break;
        case 11:
            camry = "";
            break;
        case 12:
            tesla = "";
            break;
        case 13:
            hilux = "";
            break;
        case 14:
            civic = "";
            break;
        case 15:
            eclipse = "";
            break;
        case 16:
            nissan = "";
            break;
        default:
            cout << "špatně zadané číslo" << endl;
            break;
        }
    }

    void addCar(string car)
    {
        if (car != "")
        {
            if (toyota.empty())
            {
                toyota = car;
            }
            else if (mitsubishi.empty())
            {
                mitsubishi = car;
            }
            else if (honda.empty())
            {
                honda = car;
            }
            else if (celica.empty())
            {
                celica = car;
            }
            else if (ford.empty())
            {
                ford = car;
            }
            else if (prelude.empty())
            {
                prelude = car;
            }
            else if (ram.empty())
            {
                ram = car;
            }
            else if (rav.empty())
            {
                rav = car;
            }
            else if (cr.empty())
            {
                cr = car;
            }
            else if (sentra.empty())
            {
                sentra = car;
            }
            else if (camry.empty())
            {
                camry = car;
            }
            else if (tesla.empty())
            {
                tesla = car;
            }
            else if (hilux.empty())
            {
                hilux = car;
            }
            else if (civic.empty())
            {
                civic = car;
            }
            else if (eclipse.empty())
            {
                eclipse = car;
            }
            else if (nissan.empty())
            {
                nissan = car;
            }
            else if (volneMisto.empty())
            {
                volneMisto = car;
            }
            else
            {
                cout << "Podnik už má plno aut." << endl;
            }
        }
    }

    void rezervace()
    {
        ofstream rez("rezervace.txt");

        rez << REZERVACE << endl;

        ifstream rezRead("rezervace.txt");

        string line2;
        while (getline(rezRead, line2))
        {
            cout << line2 << endl;
        }

    }

    void vyber()
    {
        cout << "Zadejte volbu 1 = koupit vozidlo | 2 = prodat vozidlo | 3 = rezervace vozu | 4 = konec programu" << endl;
        int volba;
        cin >> volba;
        if (volba == 1)
        {
            cout << endl;
            cout << "Vyberte si vozidlo (ID): " << endl;
            int volba1;
            cin >> volba1;
            removeCar(volba1);
            textak();
        }
        else if (volba == 2)
        {
            string newCar;
            cout << "Zadejte vaše vozidlo k prodeji (ID ,název, barva, cena):" << endl;
            cin.ignore();
            getline(cin, newCar);
            addCar(newCar);
            textak();
        }
        else if (volba == 3)
        {
            cout << endl;
            cout << "Zarezervované vozy: " << endl;
            cout << REZERVACE << endl << endl << endl;
            cout << "Vozy možné k zapůjčení: " << endl;
            
            for (int x = 0; x <= 3; x++)
            {
                cout << volnarezervace[x] << endl;
            }
            system("pause");
        }
        else if (volba == 4)
        {
            pravda = false;
        }
        else
        {
            cout << "zkus to zadat znovu :)" << endl;
            vyber();
        }
    }

    void nabidka()
    {
        cout << "! Naše nabídka vozidel !" << endl << endl;
        textak();
        vyber();
    }
};

int main()
{
    Eshop auta;
    SetConsoleOutputCP(1250);

    while (pravda == true)
    {
        auta.nadpis();
        auta.firma();
        auta.nabidka();
        system("CLS");
    }

    return 0;
}
