#include <iostream>

using namespace std;

int main()
{
    int i=0,J=0;
    double e=0;
    cout<<"Enter a number: ";
    cin>>J;
    while(J>0)
    {
        int factorial=1;
         i=J-1;

        while(i>0)
        {factorial=factorial*i--;}


        e+=1.0/factorial;

        J=J-1;
    }

    cout<<e;
    return 0;
}

