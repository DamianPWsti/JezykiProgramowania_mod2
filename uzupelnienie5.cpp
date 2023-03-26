#include <iostream>

using namespace std;


int BinToHex()
{
    int bit;
    int out = 0;
    for(int i = 7 ; i>=0; i--)
    {
        cout << "Podaj bit: " << endl;  
        cin >> bit;
        if(bit)
            out = (out<<1) + 1;
        else
            out = (out<<0);
    }
    return out;
}

int main()
{
    cout << "Jezyki Porgramowania " << "2DZI " << "Damian" << " " << "Potoczny" << endl;
    cout << "Modul 1 "<< "Funkcje " << "Zadanie 5"<< endl;
    int out = BinToHex();
    cout << "Wprowadzona liczba to: " << out << endl;

    return 0;
}