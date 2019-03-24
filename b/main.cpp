#include <iostream>
using namespace std;
#include "Account.h"
int main()
{
    Account account1( 50 );
    Account account2( 25 );
    cout << "account1 balance:$" << account1.getBalance() <<endl;
    cout << "account2 balance:$" << account2.getBalance() <<endl;

    int withdrawa1Amount;

    cout << "\nEnter withdrawal amount for account1:";
    cin >> withdrawa1Amount;
    cout << "\nattempting to subtract" << withdrawa1Amount << "form account1 balance\n\n";
    account1.debit(withdrawa1Amount);

    cout << "account1 balance:$" << account1.getBalance() <<endl;
    cout << "account2 balance:$" << account2.getBalance() <<endl;

    cout << "\nEnter withdrawal amount for account2:";
    cin >> withdrawa1Amount;
    cout << "\nattempting to subtract " << withdrawa1Amount << "form account2 balance\n\n";
    account2.debit(withdrawa1Amount);
    cout << "account1 balance:$" << account1.getBalance() << endl;
    cout << "account2 balance:$" << account1.getBalance() << endl;
    return 0;


}
