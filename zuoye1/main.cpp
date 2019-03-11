#include <iostream>
using namespace std;
int main()
{
    int number1 = 0;
    int number2 = 0;
    int result1 = 0;
    int result2 = 0;
    int result3 = 0;
    int result4 = 0;

    cout << "Enter two integers: ";
    cin >> number1 >> number2;
    result1 = number1 + number2;
    result2 = number1 * number2;
    result3 = number1 - number2;
    result4 = number1 / number2;
    cout << "he " << result1 << endl;
    cout << "ji " << result2 << endl;
    cout << "cha " << result3 << endl;
    cout << "shang " << result4 << endl;

}
