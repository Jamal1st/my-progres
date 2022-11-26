#include <iostream>

using namespace std;

int main()
{
    int sum =0;
    int x;
    cout <<"Input Bilangan";
    cin>>x;
    while(x !=9999 )//!= (ketika x bukan 9999 maka akan terjadi looping)
    {
        cout<< x <<endl;
        sum+=x; //atau sum=sum + x
        cout<<"Input Bilangan : ";
        cin>>x;
    }
    cout << "Jumlah angka ="<<sum<<endl;


    return 0;
}
