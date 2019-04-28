#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    const size_t arraysize=10;
    array<int,arraysize>a={0,0,0,0,0,0,0,0,0,0};
}
int main()
{
    const size_t arraysize=15;
    array<int,arraysize>b={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    for(int i=1;i++<=15;)
    {
        b[i]=b[i]+1;
    }
}
int main()
{
    array<double,12>monthlyTemperatures={1,1,1,1,1,1,1,1,1,1,1,1};

}
int main()
{
    array<int,5>bestScores={1,2,3,4,5};
    for(int i=1;i++<=5;)
    {
        cout << bestScores[i]<<endl;
    }
}
