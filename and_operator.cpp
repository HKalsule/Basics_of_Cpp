#include <iostream>
using namespace std;
int main()
{
int Int1;
int Int2=0;
int i;
cout << "Enter The Number :" << endl;
cin >> Int1;
for(i=0;i<100;i++)
{
    if (Int1&1<<i)
    {
        Int2++;
    }
}
cout << (Int2) << endl;
return 0;
}