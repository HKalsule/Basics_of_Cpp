#include <iostream>
using namespace std;

class Calender
{ 
    int d;
    int m;
    int y;
    int ad;
    int am;
    int ay;
    int dd;
    int mm;
    int yy;

    public:
    Calender()
    {
    cout << "Enter current date :- " << endl;
    cin >> d;
    cout << "Enter date of birth :- " << endl;
    cin >> ad;
    cout << "Enter current month :- " << endl;
    cin >> m;
    cout << "Enter month of birth :- " << endl;
    cin >> am;
    cout << "Enter current year :- " << endl;
    cin >> y;
    cout << "Enter year of birth :- " << endl;
    cin >> ay;
    }

    float age ()
    {
    dd = d-ad;
    cout << ":: Your age is " << dd << "days ";
    mm = m-am;
    if (mm<0)
    mm = m + (12-am);
    cout << mm << "months ";
    yy = y-ay;
    cout << yy << "years" << endl;
    return d;
    }

    float date ()
    {
    if(((m=1)||(m=3)||(m=5)||(m=7)||(m=8)||(m=10)||(m=12)) && (d<=31))
    cout << ":: Its a valid date" << endl;
    else if(((m=4)||(m=6)||(m=9)||(m=7)||(m=11)) && (d<=30))
    cout << ":: Its a valid date" << endl;
    else if((m==2) && (d<30))
    cout << ":: Its a valid date" << endl;
    else
    cout << ":: Invalid date" << endl;
    return y;
    }

    float leapyear ()
    {
    if((y % 400 == 0)||(y % 4 == 0  && y % 100 != 0))
        cout <<":: "<< y << " is a Leap Year" << endl;
    else
        cout <<":: "<< y << " is not a Leap Year" << endl;
    }
};
int main()
{
    Calender c1;
    c1.age ();
    c1.date (); 
    c1.leapyear ();
    return 0;
}