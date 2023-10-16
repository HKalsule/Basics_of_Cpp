//Writing a program to check all operators

using namespace std;

int main()

{
    int Int0 = 14;

    int Int1 = 2;

    int Sum = Int0 + Int1;

    int Sub = Int0 - Int1;
    
    int Mul = Int0 * Int1;

    float Div = Int0 / Int1;

    int Modulas = Int0 % Int1;

    int GreaterThen = Int0 > Int1;

    int LessThen = Int0 < Int1;

    int EqualTo = Int0==Int1;

    int Sum0 = Int0+=Int1;

    int Sub0 = Int0-=Int1;

    int Mul0 = Int0*=Int1;

    int Div0 = Int0/=Int1;

    int And = Int0 && Int1;

    int Or = Int0 || Int1;

    int NegationInt0 = !Int0;

    int NegationInt1 = !Int1;

    cout<< " Summation is " << (Sum) << endl;

    cout<<  " Subtraction is " << (Sub) << endl;

    cout<<  " Multiplication is " << ( Mul) << endl;

    cout<<  " Division is " << (Div) << endl;

    cout<<  " Modulus is " << (Modulas) << endl;

    cout<<  " 1 if true and 0 if false : " << (GreaterThen) <<endl;

    cout<< " 1 if true and 0 if false : " << (LessThen) <<endl;

    cout<< " 1 if true and 0 if false : " << (EqualTo) <<endl;

    cout<< " Int0+=Int1 : " << (Sum0) <<endl;

    cout<< " Int0-=Int1 : " << (Sub0) <<endl;

    cout<< " Int0*=Int1 : " << (Mul0) <<endl;

    cout<< " Int0/=Int1 : " << (Div0) <<endl;

    cout<< " Int0 AND Int1 :" << (And) <<endl;

    cout<< " Int0 OR Int1 : " << (Or) <<endl;

    cout<< " Negation of Int0 : " << (NegationInt0) <<endl;

    cout<< " Negation of Int1 : " << (NegationInt1) <<endl;

    return 0;
}