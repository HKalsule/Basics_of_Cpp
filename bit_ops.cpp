//Writing a program to set bit 2 to 0

#include <iostream>

using namespace std;

int main()

{

    int Num = 29;

    int Output=(Num&~(1<<2));

    cout<< (Output) << endl;

    return 0;
    
}