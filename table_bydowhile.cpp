#include <iostream>
using namespace std;
int main()
{
int Int1;
int Int2;
cout << "Enter The Number :" << endl;
cin >> Int1;
do
{
    cout << (Int1*Int2) << endl;
    Int2++;
}
while (Int2<11);
}