#include <iostream>
using namespace std;
int main()
{
int Int1;
int Int2;
cout << "Enter The Number :" << endl;
cin >> Int1;
for(Int2=2;Int2<11;Int2++)
{
    cout << (Int1*Int2) << endl;
}
return 0;
}