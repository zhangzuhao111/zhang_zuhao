#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    cout << "Enter a integer: ";
    cin >> x;
    if(x%2==0)
    cout << x << "为偶数 " << endl;
    if(x%2==1)
    cout << x << "为奇数 " << endl;

}
