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
    cout << "最大值 " << a <<endl;
    if(b>a&&b>c&&b>d&&b>e)
    cout << "最大值 " << b <<endl;
    if(c>a&&c>b&&c>d&&c>e)
    cout << "最大值 " << c <<endl;
    if(d>a&&a>b&&d>c&&d>e)
    cout << "最大值 " << d <<endl;
    if(e>a&&e>b&&e>c&&e>d)
    cout << "最大值 " << e <<endl;

    if(a<b&&a<c&&a<d&&a<e)
    cout << "最小值 " << a <<endl;
    if(b<a&&b<c&&b<d&&b<e)
    cout << "最小值 " << b <<endl;
    if(c<a&&c<b&&c<d&&c<e)
    cout << "最小值 " << c <<endl;
    if(d<a&&a<b&&d<c&&d<e)
    cout << "最小值 " << d <<endl;
    if(e<a&&e<b&&e<c&&e<d)
    cout << "最小值 " << e <<endl;
}
