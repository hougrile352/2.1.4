// 2.1.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int oddFunction(int num1, int num2) //Init function
{
    return (num1%2 == 1) || (num2%2 == 1); //Do the calculations
}

int main()
{
    int firstnumber; int secondnumber; //Init variables
    cout << "First number!\n"; //Get numbers
    cin >> firstnumber;

    cout << "Second number!\n";
    cin >> secondnumber;

    cout << oddFunction(firstnumber, secondnumber);
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
