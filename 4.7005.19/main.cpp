#include <iostream>


using namespace std;


int main()
{
int n = 1000;
double i = 1;
double sum = 0;
while (i<=n)
{
sum = sum + 1 / (4*i - 3) - 1 / (4*i - 1);
i++;



cout << "¦°µÄÖµÎª£º" << sum * 4 << endl;
}

}
