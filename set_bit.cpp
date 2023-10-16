//Writing a program to set bit 3 to 1

#include <iostream>

using namespace std;

int main()

{

    int Num = 5;

    int Output=(Num|(1<<3));

    cout<< (Output) << endl;

    return 0;
}