#include <iostream>

using namespace std;

int main()
{
cout<<"--------------------------------"<<endl;
    //dasar looping
    for(int x=1; x<5; x++)
    cout << "Hello world!" << endl;
cout<<"--------------------------------"<<endl;
    //condition 1
    for(int x=1; x<5; x++)
    cout << "Hello world!" << x << endl;
cout<<"--------------------------------"<<endl;
    //condition 2 (KELIPATAN 4)
    int c;
    cout<<"BATAS DERET YG AKAN DI KALI 4"<<endl;
    cin>>c;
    cout<<endl;
    for(int v=0; v<c; v++){
        cout<< v*4 <<" ";
    }
    cout<<endl;
cout<<"--------------------------------"<<endl;
    //10-25 angka genap saja
    cout<<"BILANGAN GENAP ANTARA 10-25"<<endl;
    int b;
    for(int b=10; b<=25; b++){
        if(b%2==0)
        cout<< b <<" ";
    }
    cout<<endl;
cout<<"--------------------------------"<<endl;
    //BILANGAN GANJIL GENAP
    cout<<"BILANGAN GANJIL GENAP"<<endl;
    int n;
    for(int n=1; n<=10; n++)
    {
        if(n%2==0)
            {
            cout<< n <<". GENAP"<<endl;
            }
        else if(n%2==1)
        {
            cout<< n <<". GANJIL"<<endl;
        }
    }
cout<<"--------------------------------"<<endl;
    //FAKTORIAL
    cout<<"Masukan Berapa Faktorial"<<endl;
    int m,hasil;
    cin>>m;
    cout<<endl;
    hasil=1;
    for(int g=1; g<=m; g++){
        hasil=hasil * g;
    }
    cout << m <<"!= "<<hasil<< endl;



    return 0;
}
