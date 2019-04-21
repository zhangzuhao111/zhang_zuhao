#include <iostream>
#include <iomanip>
using namespace std;
int qualityPoints(int a )
{
    if(a<=100&&a>=90)
        return 4;
    else if(a>=80)
        return 3;
    else if(a>=70)
        return 2;
    else if(a>=60)
        return 1;
    else if(a<60)
        return 0;
}
int  main()
{
    int x = 0;
    cout << "Please enter your grade: "<<endl;
    cin >> x;
    cout << "Your qualitypoints is : " << qualityPoints(x) << endl;
}
