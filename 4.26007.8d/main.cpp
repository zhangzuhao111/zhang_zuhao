#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    int sum=0;
    array <float,100> temperatures={};
    for(size_t i=1;i<=100;i++)
    {
    temperatures[i]=i;
    }
     for(size_t j = 1; j<=temperatures.size(); ++j)
    {
        sum += temperatures[j];
    }
    cout << sum;
}
