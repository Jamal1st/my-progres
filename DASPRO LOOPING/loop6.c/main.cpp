#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    while(true)
    {
        int x;
        int min,max;
        cin>>x;
        {
            if(x==-99)
            {
                cout<<endl;
                cout << "Keluar Karena Break" <<endl;
                if(x>0)
                {
                    min=x;
                    max=x;
                }
                else if(min>x)
                {
                    min=x;
                }
                else if(max<x)
                {
                    max=x;
                }
                else {}

                cout << endl;
                cout <<"Min = "<< min <<endl;
                cout <<"Max = "<< max <<endl;
                break;
                getch();
            }

        }
    }








    return 0;
}
