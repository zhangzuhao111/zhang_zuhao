#include <iostream>
using namespace std;

double pi = 3.14159;

inline double circleArea( double r )
{
   return pi * r * r;
}

int main()
{
   double x;

   cout << "Enter the x of the circle: ";
   cin >> x;

   cout << "The area of the circle is " << circleArea( x ) << endl;
}
