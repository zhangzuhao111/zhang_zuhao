#include <iostream>
using namespace std;
int main()
{
    const size_t SIZE=5;
    unsigned int values[SIZE]={2,4,6,8,10};
    unsigned int *vPtr;
    for(unsigned int i=1;i<=SIZE;i++)
    {
        cout << values[i] <<' '<<endl;
    }
    vPtr=values;
    vPtr=&values[0];
    for(size_t j=0;j<SIZE;j++)
    {
        cout << *(vPtr + j)<<' '<<endl;
    }
    for(size_t k=0;k<SIZE;k++)
    {
        cout << *(values + k) <<' '<<endl;
    }
    for(size_t m=0;m<SIZE;m++)
    {
        cout <<
        vPtr[m]<<' '<<endl;
    }

    values[4];
    *(values+4);
    vPtr[4];
    *(vPtr+4);

    vPtr+3引用的地址为1002500+3*2，储存的值为8.

    地址为1002500+4*2-4*2，储存的值为2

}
