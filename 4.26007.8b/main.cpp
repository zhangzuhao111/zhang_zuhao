#include<iostream>
#include<iomanip>
#include<array>

using namespace std;

int main()
{
    array<int,8>grades={1,2,1,2,1,2,1,2};
    cin >> grades[3];
    cout << grades[3];
}
