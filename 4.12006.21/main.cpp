#include <iostream>
using namespace std;

int isEven( int );

int main()
{
   int x;

   for ( int i = 0; i++>=0;)
   {
      cout << "Enter an integer: ";
      cin >> x;

      if ( isEven( x ) )
         cout << "True."<<endl;
      else
         cout << "False."<<endl;
   }

}

int isEven( int a )
{
    if(a%2!=0)
        return false;
    return true;
}
