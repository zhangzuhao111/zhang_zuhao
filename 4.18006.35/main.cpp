#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    srand( time(0) );
    int a = 1+rand()%1000;
    cout << "I have a number between 1 and 1000."<<endl;
    cout << "can you guess my number? "<<endl;
    for(int i=1;i++<=1000;)
    {
         int Guess = 0;
        cout << "\nPlease type your first guess."<<endl;
        cin >> Guess;

        if( a < Guess)
        cout << "Too high.Try again!\n\n";
        else if(a > Guess)
        cout << "Too low.Try again!\n\n";
        else if(a == Guess)
       {
           cout << "Excellent! You guessed the number!\n";
        cout << "Would you like to play again?\n";
         if ( i < 10 )
            cout << "Either you know the secret or you got lucky!\n";
        else if ( i == 10 )
            cout << "Ahah! You know the secret!\n";
        else
            cout << "You should be able to do better!\n\n";
       }

    }




}

