#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x = 0;
    double y = 0;
    for(int i = 0;++i<=3;)
{
    cout << "Enter the x and y: "<<endl;
    cin >> x >> y;
    cout << sqrt(x*x+y*y)<<endl;
}
}
