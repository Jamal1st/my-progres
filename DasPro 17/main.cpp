#include <iostream>

using namespace std;

int main()
{
    while(true)
    {
        cout<<"======================================"<<endl;
        int Menu;
        cout << "Berikut Menu Yang Tersedia" << endl;
        cout << "1. Nasi Krikil"<< endl;
        cout << "2. Rica Rica Bekicod"<< endl;
        cout << "3. Pepes Brotowali"<< endl;
        cout << "4. Kepiting Presto"<< endl;
        cout << "\nPilih Menu : ";
        cin>> Menu;

        switch(Menu)
        {
        case 1 :
            cout<<"Anda Memesan Nasi Krikil"<< endl;
            break;
        case 2 :
            cout<<"Anda Memesan Rica Rica Bekicod"<< endl;
            break;
        case 3 :
            cout<<"Anda Memesan Pepes Brotowali"<< endl;
            break;
        case 4 :
            cout<<"Anda Memesan Kepiting Presto"<< endl;
            break;
        default :
            cout<<"Maaf, Kode Yang Anda Inputkan Salah"<< endl;
        }
    }

    return 0;
}
