#include <iostream>
#include <ctime>
#include <cstdlib>
#include "MyLibrary.h"

using namespace std;

/* Prototipi */

void stampaMenu();
void menu(int v[],int n);
void inserisciNumerositaVettore(int &n);

/* Fine Prototipi */

void inserisciNumerositaVettore(int &n)
{
    do
    {
        cout << "Inserisci numerosita: " << endl;
        cin >> n;	
    } while (n <= 0);
}

void stampaMenu()
{   
    cout << endl;
    cout << "1. Uscita" << endl;
    cout << "2. Mostra il vettore" << endl;
    cout << "3. " << endl;
    cout << "4. " << endl;
    cout << "5. " << endl;
    cout << "6. " << endl;
    cout << "7. " << endl;
    cout << endl;
}

void menu(float v[], int n)
{
    int scelta;

    do
    {    
        stampaMenu();
        cin >> scelta;

        switch (scelta)
        {
            case 1:
                cout << "Uscita in corso..." << endl;
                break;

            case 2:
                stampaVettore(v,n);
                break;

            case 3:

                break;

            case 4:
                
                break;

            case 5:
                
                break;

            case 6:
                
                break;

            case 7:
                
                break;

            default:
                cout << "Opzione non valida" << endl;
                break;
        }

    } while (scelta != 1);
}

int main()
{
    srand(time(NULL));

    setDimensioneMax(1000);
    setRandomMin(1000);
    setRandomMax(10000);

    int v[dim_max];
    int n;

    inserisciNumerositaVettore(n);
    riempiVettoreRandom(v, n);

    menu(v, n);
}