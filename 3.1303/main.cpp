#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    cout << "Enter five integers:";
    cin >> a >> b >> c >> d >> e;

    if(a>b&&a>c&&a>d&&a>e)
    cout << "���ֵ " << a <<endl;
    if(b>a&&b>c&&b>d&&b>e)
    cout << "���ֵ " << b <<endl;
    if(c>a&&c>b&&c>d&&c>e)
    cout << "���ֵ " << c <<endl;
    if(d>a&&a>b&&d>c&&d>e)
    cout << "���ֵ " << d <<endl;
    if(e>a&&e>b&&e>c&&e>d)
    cout << "���ֵ " << e <<endl;

    if(a<b&&a<c&&a<d&&a<e)
    cout << "��Сֵ " << a <<endl;
    if(b<a&&b<c&&b<d&&b<e)
    cout << "��Сֵ " << b <<endl;
    if(c<a&&c<b&&c<d&&c<e)
    cout << "��Сֵ " << c <<endl;
    if(d<a&&a<b&&d<c&&d<e)
    cout << "��Сֵ " << d <<endl;
    if(e<a&&e<b&&e<c&&e<d)
    cout << "��Сֵ " << e <<endl;
}
