#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

unsigned int Number(int)
{

    return 1+rand()%1000;
}
int main()
{
    srand( time(0) );
    int a = 1+rand()%1000;
    cout << "I have a number between 1 and 1000."<<endl;
    cout << "can you guess my number? "<<endl;
    for(int i =1;i++<=1000;)
    {
         int Guess = 0;


        cout << "\nPlease type your first guess."<<endl;
        cin >> Guess;


        if( a < Guess)
        cout << "Too high.Try again!\n\n";
        else if(a > Guess)
        cout << "Too low.Try again!\n\n";
        else if(a == Guess)
        cout << "Excellent! You guessed the number!\n";
        cout << "Would you like to play again (yes or no)?";
        cout<<endl;

    }
    return 0;
}
