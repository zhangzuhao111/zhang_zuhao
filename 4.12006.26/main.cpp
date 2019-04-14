#include <iostream>
#include <iomanip>
using namespace std;
int celsius(int);
int fahrenheit(int);
int celsius(int a)
{
    return (32+(a*9/5));
}
int fahrenheit(int b)
{
    return ((b-32)/(9/5));
}
int main()
{
    cout << "Celsius to Fahrenheit"<<endl;
    cout << setw(7) << "Celsius" << setw(12) << "Fahrenheit"<<endl;
    for(int i=0; i<=100;i++)
        cout << setw(7) << i << setw(12) << celsius(i)<<endl;
    cout << "Fahrenheit to Celsius"<<endl;
    cout << setw(12) << "Fahrenheit" <<setw(7) << "Celsius" <<endl;
    for(int j=32;j<=212;j++)
        cout << setw(12) << j << setw(7) << fahrenheit(j) <<endl;
}
