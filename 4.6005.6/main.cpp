#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int sum = 0;
    for (int x = 0; ++i>=0;)
    {

        cout <<"" <<endl;
        cin >> x;
      if(x==9999)
        break;
        sum = sum+x;

    }


    cout << sum/(i-1);

}
