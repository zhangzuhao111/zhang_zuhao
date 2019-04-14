#include <iostream>
#include <iomanip>
using namespace std;

int isPrime( int );

int main()
{
   int count = 1;

   cout << "The prime numbers from 1 to 10000 are:" << endl;
   cout << setw( 6 ) << 2;

   for ( int a = 3; a < 10000; a += 2 )
   {
      if ( isPrime( a ) )
      {
         count++;
         cout << setw( 6 ) << a;

         if ( count % 10 == 0 )
            cout << endl;
      }
   }
   cout << endl << "  The total numbers is:" << count <<endl;
}

int isPrime( int n )
{
   for ( int b = 2; b <= n / 2; b++ )
   {
      if ( n % b == 0 )
         return false;
   }

    return true;
}
