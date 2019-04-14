#include <iostream>

using namespace std;

int main()
{
    int i=0;
    int x=1;
    int base = 0;
    cout << "Enter the exponent: "<<endl;
    cin >> i;
    cout << "Enter the base: "<<endl;
    cin >> base;
    while(i-->0)
    {

        x=x*base;
    }
    cout << x;
}
