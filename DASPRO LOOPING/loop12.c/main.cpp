#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout<<"------------------------------------------------------"<<endl;
    cout << "   Celcius"<<"      |      "<<"Fahrenheid                     |" << endl;
    cout<<"------------------------------------------------------"<<endl;


    for(int i=0; i<=100; i++)
    {
        if (i==0)
        {
            cout<<i<<"               |               "<<i*1.8+32<<".0"<<"                  |"<<endl;
        }
        else if (i==5)
        {
            cout<<i<<"               |               "<<i*1.8+32<<".0"<<"                  |"<<endl;
        }
        else if(i>=0&&i<=9)
        {
            cout<<i<<"               |               "<<i*1.8+32<<"                  |"<<endl;
        }

        else if (i==100)
        {
            cout<<i<<"             |               "<<i*1.8+32<<".0"<<"                  |"<<endl;
        }
        else if (i%5==0)
        {
            cout<<i<<"              |               "<<i*1.8+32<<".0"<<"                  |"<<endl;
        }

        else
            cout<<i<<"              |               "<<i*1.8+32<<"                  |"<<endl;
    }





    return 0;
}
