#include <iostream>
using namespace std;
int c = 543;
int main()
{
    
        cout <<"Global variable = "<<::c<<endl;;
        float d = 34.2f;
        cout<<d<<endl;
        long double e= 34.2l;
        cout<<e<<endl;
        cout<<"Size operator"<<endl;
        cout<<sizeof(d)<<endl;
        cout<<sizeof(e)<<endl;
        cout<<endl;

    // Reference variable
    int t = 542;
    int &f = t;
    cout << f << endl;
    cout << endl;
    // Typecasting
    float w = 78.46;
    cout << (int)w << endl;
    bool x = false;
    bool y = true;

    // Two ways of typecasting
    cout << (int)x << endl;
    cout << (int)y << endl;
    cout << int(x) << endl;
    cout << int(y) << endl;

    return 0;
}