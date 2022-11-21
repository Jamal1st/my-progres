#include <iostream>

using namespace std;

int main()
{


    for(int j=1; j<=20; j++)
        cout<< j << endl;
    cout<<endl;

    int hasil=1;
    for(int k=1; k<=20; k++)
    {
        hasil= hasil + k;
    }
    cout<< "Jumlah    = "<< hasil << endl;
    cout<< "Rata-Rata = "<< hasil/20 << endl;



    return 0;
}
