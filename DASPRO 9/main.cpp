#include <iostream>

using namespace std;

int main()
{
/* int bulan = 12;
 int hari  = 4;
    if(bulan >= 1 && bulan <= 12){
        cout <<"bulan valid"<< endl;
    }*/

    int month;
    cout << "\nInput Month Number: ";
    cin >> month;

    switch(month){
    case 1 : cout<< "JANUARY: "; break;
    case 2 : cout<< "FEBRUARY: "; break;
    case 3 : cout<< "MARCH: "; break;
    case 4 : cout<< "APRIL: "; break;
    case 5 : cout<< "MAY: "; break;
    case 6 : cout<< "JUNE: "; break;
    case 7 : cout<< "JULY: "; break;
    case 8 : cout<< "AUGUST: "; break;
    case 9 : cout<< "SEPTEMBER: "; break;
    case 10 : cout<< "OCTOBER: "; break;
    case 11 : cout<< "NOVEMBER: "; break;
    case 12 : cout<< "DECEMBER: "; break;
    default : cout<< "no month after DECEMBER"; break;
    }
        //1,3,6,8,10,12
    if((month==1)||(month==3)||(month==6)||(month==8)||(month==10)||(month==12))
    {
        cout<< "Have 31 Day"<<endl;
    }
    else if(month == 2)
    {
        cout << "have 28 day" << endl;
    } else
    {
        cout<< "have 30 day"<<endl;
    }

    return 0;
}
