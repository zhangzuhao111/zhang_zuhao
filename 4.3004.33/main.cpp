#include <iostream>

using namespace std;

int main()
{
    unsigned int x = 0;
    unsigned int y = 0;
    unsigned int z = 0;
    cout << "Enter three numbers: ";
    cin >>x>>y>>z;
    if(x*x+y*y==z*z)
        cout << "ok";
    else if(y*y+z*z==x*x)
        cout << "ok";
    else if(x*x+z*z==y*y)
        cout << "ok";
    else
        cout << "no";
}
