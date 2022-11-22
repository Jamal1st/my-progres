/*
Nama : M. Jamaludin Nur
Nim  : A11.2022.14616
Pembelajan: Daspro
*/
#include <iostream>
#include <conio.h>
using namespace std;
int x,y;


int main()
{
int min,max;
    for(int i=0;i<=99;i++)
    {
        cout << "Masukkan Angka = "; cin >> x;
        if (x==-99)
        {
            break;
        }

       else if (i == 0)
        {
            min = x;
            max = x;
        }
        else if ( min > x)
        {
            min = x;
        }
        else if (max < x)
        {
            max = x;
        }
        else {}
    }

    cout << endl;
    cout << "Min : " << min << endl;
    cout << "Max : " << max << endl;
    return 0;
}
