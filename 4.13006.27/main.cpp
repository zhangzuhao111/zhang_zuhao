#include <iostream>

using namespace std;

double minimum(double a,double b,double c)
{
    if(a<b&&a<c)
       return a;
    else
    if(b<a&&b<c)
       return b;
    else
    if(c<a&&c<b)
       return c;
}

int main()
{
    double x;
    double y;
    double z;
    cout << "Enter three numbers: "<<endl;
    cin >> x >> y >> z;
    cout << "The smallest is " << minimum(x,y,z) << endl;
}
