#include <iostream>
#include <iomanip>
using namespace std;

int reverseDigits( int );

int reverseDigits( int n )
{
   int reverse = 0;
   int a =0;
   int b =0;
   int c =0;
   int d =0;


    a=n/1000;
    b=(n-a*1000)/100;
    c=(n-a*1000-b*100)/10;
    d=n-a*1000-b*100-c*10;
    reverse=d*1000+c*100+b*10+a;


   return reverse;
}


int main()
{
   int number;

   cout << "Enter a number: ";
   cin >> number;

   cout << "The number is: "

    << reverseDigits( number ) << endl;
}

