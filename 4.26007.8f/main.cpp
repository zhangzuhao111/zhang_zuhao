#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    array<float,99>w={};
    int smallest=0;
    int largest=0;
    for(int i=1;i<=99;i++)
    {
        if(w[i]>w[i--])
         smallest=w[1];
    else
        largest=w[i--];
    }
}
