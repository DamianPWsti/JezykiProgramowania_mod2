#include <iostream>

using namespace std;

void tab()
{
    uint64_t tablica[100] = {0};
    for(int i=0; i < 100; i++)
    {
        if(i<2)
            tablica[i] = 1;
        else
        {
            tablica[i]= tablica[i-1] + tablica[i-2];
        }
    }
    for(int i=0; i < 100; i++)
        cout << i << ": "<< tablica[i] << endl;
}

int main()
{
    cout << "Jezyki Porgramowania " << "2DZI " << "Damian" << " " << "Potoczny" << endl;
    cout << "Modul 2 "<< "Tablice " << "Zadanie1"<< endl;
    tab();
    return 0;
}