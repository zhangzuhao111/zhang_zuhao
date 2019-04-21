#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int flip()
{
    srand(  time( 0 ) );
    return rand()%2;
}
int main()
{
    int tailscount=0;
    int headscount=0;

    for(unsigned int i=1; i++<=100 ;)


    {
        if(rand()%2)

            ++tailscount;

    else

            ++headscount;
    }
        cout << "headsCount is: " << headscount<<endl;
        cout << "tailsCount is :" << tailscount <<endl;

}
