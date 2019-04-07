#include <iostream>

using namespace std;

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a+b>c&&a+c>b&&b+c>a)
        cout << "ok";
    else
        cout << "no";


}
