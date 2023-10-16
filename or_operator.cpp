#include <iostream>
using namespace std;
int main()
{
int Int1;
int count=0;
cout << "Enter The Number :" << endl;
cin >> Int1;
while (Int1|=0)
{
if (Int1&1)
{
  count ++;
}
Int1>>=1;
}
cout << (Int1) << endl;
return 0;
}
