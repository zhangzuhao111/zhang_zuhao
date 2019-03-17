#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int y = 0;
    cout << "Enter first integer\n";
    cin >> x;
    cout << "Enter second integer\n";
    cin >> y;

    if(x>y)
    cout << x << " is large";
    if(y>x)
    cout << y << " is large";
    if(x==y)
    cout << "These numbers are equal.";
}
