#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x = 0;
    int y = 0;

    for( int i =1;i++>=0;)
    {
        cout << "Enter two integer: "<<endl;
        cin >> x >>y;
        if((fmod(y,x)==0))
            cout << "True."<<endl;
        else
            cout << "False."<<endl;
    }
}

