// Guess-My-Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;

int main()
{
    int answer = 88;
    int guess = 0;

    cout << "Hello friend!\n";

    while (guess != answer) 
    {
       
        cout << "I'm thinking of a number from 1 - 100.\n";
        cout << "Can you guess it?\n";

        cin >> guess;

        if (guess == answer)
        {
            cout << "You guessed it! I was thinking of " << answer << '\n';
        }
        if (guess > answer)
        {
            cout << "Too high!\n";
        }
        if (guess < answer)
        {
            cout << "Too low!\n";
        }
    }
    


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
