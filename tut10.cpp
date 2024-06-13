#include <iostream>
using namespace std;
int main()
{

    cout << "forloop" << endl;
    for (int i = 0; i < 11; i++)
    {
        if(i==5){
            break;
        }
        cout<<i<<endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Whileloop" << endl;
    int i = 0;
    while (i <= 10)
    {
        cout << i << endl;
        i++;
    }
    cout << endl;
    cout << "Do-while loop" << endl;

    int a = 0;
    do
    {
        cout << a << endl;
        a++;
    } while (a < 11);
    return 0;
}
