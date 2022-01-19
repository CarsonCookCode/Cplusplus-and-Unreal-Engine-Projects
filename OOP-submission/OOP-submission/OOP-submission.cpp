// OOP-submission.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string>

class Dog {
public:
    string breed;
    string color;
    int height;
    int weight;

    void shake() {
        cout << "Dog shakes" << '\n';
    }

    void sit() {
        cout << "Dog sits down" << '\n';
    }

    void lay() {
        cout << "Dog lays down" << '\n';
    }
};

int main()
{
    Dog myDog;
    myDog.breed = "Hound";
    myDog.color = "Brown";
    myDog.height = 2;
    myDog.weight = 60;

    cout << "Dog information:" << '\n';

    cout << "Breed: " << myDog.breed << '\n';
    cout << "Color: " << myDog.color << '\n';
    cout << "Height: " << myDog.height << " feet " << '\n';
    cout << "Weight: " << myDog.weight << " pounds " << '\n';
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
