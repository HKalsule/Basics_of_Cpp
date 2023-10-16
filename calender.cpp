#include <iostream>
using namespace std;

class Calender
{ 
    int d;
    int m;
    int y;

    public:
    Calender()
    {
    cout << "Enter the month :- " << endl;
    cin >> m;
    if((m=1)||(m=3)||(m=5)||(m=7)||(m=8)||(m=10)||(m=12))
    cout << "Enter the date :- " << endl;
    cin >> d;
    if (d>31)
    cout << "Enter valid Date. " << endl;
    if((m=4)||(m=6)||(m=9)||(m=7)||(m=11))
    cout << "Enter the date :- " << endl;
    cin >> d;
    if (d>30)
    cout << "Enter valid Date. " << endl;
    cout << "Enter the year :- " << endl;
    cin >> y;
    };
    float leapyear ()
    {
    if((y % 400 == 0)||(y % 4 == 0  && y % 100 != 0))
        cout << y << " is a Leap Year" << endl;
    else
        cout << y << " is not a Leap Year" << endl;
    }
};
int main()
{
    Calender c1;
    c1.leapyear();
    return 0;
}