#include <iostream>
using namespace std;
int main()
{

    int a = 4;
    int b = 5;
    cout<<" Arithmetic Operator"<<endl;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a / b << endl;
    cout << a * b << endl;
    cout << a % b << endl;
    cout << endl;
    cout<<"Increment"<<endl;
    cout << a++ << endl;
    cout << a << endl;
    cout << ++a << endl;
    cout << a << endl;
    cout << --a << endl;
    cout << a << endl;
    cout << a-- << endl;
    cout << a << endl;

    cout << endl;

    cout<<"Comparison"<<endl;
    // a = 4,b = 5;
    cout << (a == b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;
    cout << (a != b) << endl;
    cout << (a < b) << endl;

    cout<<"Logical Operators"<<endl;
    cout<<((a<b && a!=b))<<endl;
    cout<<((a<b || a!=b))<<endl;
    cout<<((a>b || a!=b))<<endl;
    cout<<((a>b && a!=b))<<endl;
    cout<<((a>b || a==b))<<endl;
    return 0;
}