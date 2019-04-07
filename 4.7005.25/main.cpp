#include <iostream>
using namespace std;
int main()
{
	int i,j,n=6;
	for(j=1; j<=n-1; ++j)
		cout<<" ";
	cout<<"*"<<endl;
	for(i=2;i<=n-1;++i)
	{
		for(j=1; j<=n-i; ++j)
			cout<<" ";
		cout<<"*";
		for(j=1; j<=2*i-3; ++j)
			cout<<" ";
		cout<<"*"<<endl;
	}
	for(j=1; j<=2*n-1; ++j)
		cout<<"*";
	cout<<endl;
	return 0;
}
