#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
    cout << "Input three different integers: ";
    cin >> x >> y >>z;
    cout << "Sum is " << x+y+z << endl;
    cout << "Average is " << (x+y+z)/3 << endl;
    cout << "Product is " << x*y*z << endl;

    if(x<y&&x<z)
    cout << "Smallest is " << x << endl;
    if(y<x&&y<z)
    cout << "Smallest is " << y << endl;
    if(z<x&&z<y)
    cout << "Smallest is " << z << endl;

    if(x>>y&&x>z)
    cout << "Largest is " << x << endl;
    if(y>x&&y>z)
    cout << "Largest is " << y << endl;
    if(z>y&&z>x)
    cout << "Largest is " << z << endl;

}
