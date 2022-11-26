#include <iostream>

using namespace std;

int main()
{
    int x;
    int sum=0;
    int i=0;

    cout<<"Input Bilangan : ";
    cin>>x;
    while(x != 9999)
    {
        cout<< x <<endl;
        sum+=x; //atau sum=sum + x
        cout<<"Input Bilangan : ";
        cin>>x;
        i++;
    }
    cout << "Jumlah angka ="<<sum<<endl;
    cout << "Jumlah angka Cacah ="<<i<<endl;



    return 0;
}
