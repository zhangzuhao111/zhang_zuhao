#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double product1 = 0;
   double product2 = 0;
   double product3 = 0;
   double product4 = 0;
   double product5 = 0;

   int Id = 1;
   int quantity;

   cout << fixed << setprecision( 2 );

   while ( Id != -1 )
   {
      cout << "Enter product number: ";
      cin >> Id;

      if ( Id >= 1 && Id <= 5 )
      {
         cout << "Enter quantity sold: ";
         cin >> quantity;

         switch ( Id )
         {
            case 1:
               product1 = 2.98;
               break;

            case 2:
               product2 = 4.50;
               break;

            case 3:
               product3 = 9.98;
               break;

            case 4:
               product4 = 4.49;
               break;

            case 5:
               product5 = 6.87;
               break;
         }
      }
      else if ( Id = -1 )
         cout <<
            "Product number must be between 1 and 5" ;
   }


   cout << endl;
   cout << "Product 1: $" << product1 << endl;
   cout << "Product 2: $" << product2 << endl;
   cout << "Product 3: $" << product3 << endl;
   cout << "Product 4: $" << product4 << endl;
   cout << "Product 5: $" << product5 << endl;

}

