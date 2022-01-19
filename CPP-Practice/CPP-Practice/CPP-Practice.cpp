// CPP-Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string>


class Vehicle {
public:
    string make;
    string model;
    int year;

    void drive() {
        for (int i = 0; i < 10; i++) 
        {
            cout << i << "mph" << " ";
        }
        cout << '\n';
    }

    void stop();

    Vehicle(string x, string y, int z) {
        make = x;
        model = y;
        year = z;
    }

    Vehicle() = default;
};

void Vehicle::stop() {
    for (int i = 10; i > 0; i--)
    {
        cout << i << "mph" << " ";
    }
    cout << '\n';
}

class Person {
public:
    string name;
    int age;

    void speak() {
        cout << "I am a human" << '\n';
    }

    Person(string x, int y) {
        name = x;
        age = y;
    }

    Person() = default;
private: 
    int zip;
protected:
    int social;
    
};

//Person::Person(string x, int y) {
//    name = x;
//    age = y;
//}

class Employee : public Person {
public:
    int ID;
};

class Accountant : public Employee {
public:
    int accID;
};

class Transformer : public Person, public Vehicle {
public:
    bool evil;
  
    void speak() {
        cout << "AUTOBOTS ROLL OUT" << '\n';
    }

    void setSocial(int x) {
        social = x;
    }
    int getSocial() {
        return social;
    }
};

void myFunction() {
    cout << "Called it";
}

void doMath(int x, int y) {
    cout << x * y + y;
    return;
    cout << "Never seen";
}

void switchNums(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

void addNums(int x, int y) {
    cout << x + y << '\n';
}

void addNums(int x, int y, int z) {
    cout << x + y + z << '\n';
}

int main()
{
    char letter = 'C';
    int number = 5;
    double number2 = 8.0;
    bool question = true;
    string word = "hey";
    string word2 = "there";
    const int immutableNum = 6;
    string name;
    float number3 = 7.555;

    cout << "Hello friend!\n";
    cout << "Enter your name...\n";
    //cin >> name;
    cout << "Hello " << name << "!\n";

    cout << word + " " + word2 << "\n";

   cout << word.length() << "\n";

   cout << word2.substr(2,1) << "\n";

   word[1] = 'a';
   cout << word << "\n";

   float myNum1 = 7.0;
   float myNum2 = 21.0;

   cout << myNum1 + myNum2 << "\n";
   cout << myNum1 - myNum2 << "\n";
   cout << myNum1 * myNum2 << "\n";
   cout << myNum1 / myNum2 << "\n";

   if (myNum1 < myNum2 && myNum1 == 7.0) {
       cout << "Yes" << "\n";
   }
   else if(5 > 3){

   }
   string word4;
   //getline(cin, word4);
   //cout << word4 << "\n";

   cout << max(myNum1, myNum2) << "\n";
   cout << sqrt(81) << "\n";
   cout << round(1.51) << "\n";
   cout << pow(10, 8) << "\n";

   int myInt = 2;
   switch (myInt) {
   case 1:
       cout << "hello" << "\n";
       break;
   case 2:
       cout << "there" << "\n";
       break;
   }

   int x = 80;
   string result = (x < 3) ? "Yes" : "No";
   cout << result << "\n";

   int i = 0;
   while (i < 50) {
       cout << i << " ";
       i++;
   }
   cout << "\n";
   
       int j = 0;
       do {
           cout << j << " ";
           i++;
       } 
       while (j > 0 && j < 25);
      
       cout << "\n";
       
       for (int i = 0; i < 10; i++) {
           cout << "yep" << " ";
       }
       cout << "\n";


       for (int i = 0; i < 10; i++) {

           if (i == 3) {
               break;
           }

           cout << "yep" << " ";
       }
       cout << "\n";

       for (int i = 0; i < 10; i++) {

           if (i == 3) {
               continue;
           }

           cout << i << " ";
       }
       cout << "\n";

       string people[3] = { "Carson", "Taylor", "Jared" };
       cout << people[1];
       cout << '\n';

       for (int i = 0; i < 3; i++) {
           cout << people[i] << " ";
       }
       cout << '\n';

       string myName = "Carson";
       string& goose = myName;

       cout << myName << '\n';
       cout << goose << '\n';
       cout << '\n';
       myName = "chicken";
       cout << goose << '\n';
       cout << &myName << '\n';
       cout << &goose << '\n';

       string* myNamePointer = &myName;
       cout << myNamePointer << '\n';
       cout << *myNamePointer << '\n';

       myFunction();
       cout << '\n';

       int myInt1 = 43;
       int myInt2 = 123;
       int myInt3 = 2;
       doMath(myInt1, myInt2);
       cout << '\n';

       cout << myInt1 << " " << myInt2 << '\n';
       switchNums(myInt1, myInt2);
       cout << myInt1 << " " << myInt2 << '\n';

       addNums(myInt1, myInt2);
       addNums(myInt1, myInt2, myInt3);

       Vehicle myCar("VW", "Jetta", 2017);
       myCar.make = "VW";

       //Vehicle yourCar;
       //yourCar.make = "Nissan";
       
       myCar.drive();
       myCar.stop();

       Transformer bumblebee;
       bumblebee.name = "bumblebee";
       bumblebee.make = "Honda";
       bumblebee.setSocial(1234);
       cout << bumblebee.getSocial() << '\n';
       bumblebee.speak();
       
       try {
           int num5 = 3;
           if (num5 > 4) {
               cout << "yes" << '\n';
           }
           else {
               throw(num5);
           }
       }
       catch (int num) {

           cout << "smaller than 4: " << num << '\n';
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
