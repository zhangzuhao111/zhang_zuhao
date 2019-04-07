#include <iostream>

using namespace std;

int main()
{
    unsigned int counter = 1;
    unsigned int number = 0;
    unsigned int a = 1;
    unsigned int b = 0;
    cout << "Enter a number: ";
    cin >> number;
    b=number;//b要减小而不想影响number的比较
    while( counter<=number )
   {
        a=a*b;
        b=b-1;
        counter=counter+1;
   }
        cout << a << "";

}//从大到小乘
