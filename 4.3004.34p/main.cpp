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
    b=number;//bҪ��С������Ӱ��number�ıȽ�
    while( counter<=number )
   {
        a=a*b;
        b=b-1;
        counter=counter+1;
   }
        cout << a << "";

}//�Ӵ�С��
