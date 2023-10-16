#include <iostream>
using namespace std;
int main()
{
float A;
cout << "Enter Your Marks Percentage :" << endl;
cin >> A;
if (A>=90)
{
  cout << "Grade is O" << endl;
}
else if(A>=80)
{
  cout << "Grade is A+" << endl;
}
else if(A>=70)
{
  cout << "Grade is A" << endl;
}
else if(A>=60)
{
  cout << "Grade is B+ " << endl;
}
else if(A>=50)
{
  cout << "Grade is B " << endl;
}
else if(A>=40)
{
  cout << "Grade is C " << endl;
}
else
{
  cout << "Grade is F " << endl;
}
return 0;
}

    