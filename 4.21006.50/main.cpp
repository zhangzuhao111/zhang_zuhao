#include <iostream>
using namespace std;

int tripleByValue( int );
void tripleByReference( int & );

int main()
{
   int count;

   cout << "Enter a value for count: ";
   cin >> count;

   cout << "\nValue of count is: "
      << count << "\ntripleByValue() is: "
      << tripleByValue( count )
      << "\nValue of count (in main) is: "
      << count;


   cout << "\n\nValue of count is: "
      << count << endl;

   tripleByReference( count );

   cout << "Value of count (in main) after call to "
      << "tripleByReference() is: " << count << endl;
}

int tripleByValue( int value )
{
   return value *= 3;
}
void tripleByReference( int &valueRef )
{
   valueRef *= 3;
}
