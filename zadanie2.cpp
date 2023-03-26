#include <iostream>

using namespace std;

void tab()
{
    cout << "Podaj Liczbę: ";
    int zmienna;
    char tablica[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int out[50];
    cin >> zmienna;
    int binarnie = zmienna;
    int index = 0;
    while(binarnie)
    {
        out[index++] = binarnie%2;
        binarnie /=2;
    }
    cout << "Binarnie to :";
    for(int i=index-1; i>=0; i--)
        cout << out[i];
    
    int szesnastkowo = zmienna;
    index = 0;
    while(szesnastkowo)
    {
        out[index++] = szesnastkowo%16;
        szesnastkowo /=16;
    }

    cout << endl << "Szesnastkowo to :";
    for(int i=index-1; i>=0; i--)
        cout << tablica[out[i]];
    cout << endl;
}

int main()
{
    cout << "Jezyki Porgramowania " << "2DZI " << "Damian" << " " << "Potoczny" << endl;
    cout << "Modul 2 "<< "Tablice " << "Zadanie2"<< endl;
    tab();
    return 0;
}