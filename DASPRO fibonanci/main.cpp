#include <iostream>

using namespace std;

int main()
{
    int a, a1=0, a2=1, hasil =0; //a1 dan a1 penampung
    // 0,1,1,2,3,5,8 dst penambahan 2 angka sebelum nya
    cout << "Masukan batas deret : ";
    cin >>a;
        cout<<endl;
    cout << "Deret Fibonacci: ";
        for(int x=1; x<=a; x++)
    {
        //deret pertama fibonanci
            if(x==1)
            {
                cout<<" "<<a1<<" ";
                continue; // 0
            }
            if(x==2)
            {
                cout<<a2<<" ";
                continue; //1
            }
        hasil = a1+a2 ;
        a1 = a2;
        a2 = hasil;
        // nilai a1 dan a2 di tambah, lalu a1 mengunakan a2 sebelumnya dan a2 jadi hasil maka jika di tambah akan jadi deret fibonanci
        cout << hasil << " ";
    }

    return 0;
}
