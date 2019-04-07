#include <iostream>

using namespace std;

int main()
{
    unsigned int counter=1;
    unsigned int number=0;
    unsigned int largest=0;

    while(counter<=10)
    {
        cout <<"Enter a number: ";
        cin >> number;
        counter=counter+1;
        if(largest < number)
            largest = number;
        if(largest > number)
            largest =largest;
        if(largest == number)
            largest = number;
    }
        cout << largest << "";
}
