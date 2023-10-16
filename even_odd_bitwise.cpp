//Writing a program to check number is even or odd using bitwise operator

#include <iostream>

using namespace std;

int main()

{

    int Num = 13;

    int Output=(Num&1);

    if (Output==0)

    {

    cout<< " Even "  << endl;

    }

    else

    {

    cout<< " Odd "  << endl;

    }

    return 0;
}