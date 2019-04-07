#include <iostream>

using namespace std;

int main()
{
    int counter = 1;
    int number = 0;
    int largest1 = 0;
    int largest2 = 0;
    while( counter<=10 )
    {
        cout << "Enter a number: ";
        cin >> number;
        counter = counter+1;

        if( largest1<number )
        {
        largest2=largest1;
        largest1=number;
        }
        else
         if(largest2<number)
        largest2=number;
    }
        cout << largest1 << "" << endl;
        cout << largest2 << "";

}


