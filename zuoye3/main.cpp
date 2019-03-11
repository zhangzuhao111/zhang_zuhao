#include <iostream>
using namespace std;
int main()
{
    int number1  = 0;
    int result1 = 0;
    int result2 = 0;
    int result3 = 0;

    cout << "Enter a integer: ";
    cin >> number1 ;
    result1 = 2 * number1;
    result2 = 2 * 3.14159 * number1;
    result3 = 3.14159 * number1 * number1;
    cout << result1 << endl;
    cout << result2 << endl;
    cout << result3 << endl;

}
