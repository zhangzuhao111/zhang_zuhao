#include <iostream>
using namespace std;
int main()
{
    int *number;
    cout << &number <<endl;

    double *realPtr;
    long *integerPtr;
    integerPtr = realPtr;

    int * x, y;
    x=y;

    char s[] = "this is a character array";
    for(;*s !='\0';s++)
        cout << *s << ' ';

    short * numPtr, result;
    void * genericPtr = numPtr;
    result = *(genericPtr+7);

    double x=19.34;
    double *xPtr;
    xPtr = &x;
    cout<<xPtr<<endl;

}
