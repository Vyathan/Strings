// CPGM 230 Assignment 4
// Strings
// Matt Brundage II
// 11/6/21

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    // Declare
    string characters = "";

    // Accept user input
    cout << "Enter a string: ";
    cin >> characters;

    // Reverse the order
    int x = strlen(characters);
    cout << "The string reversed is: ";
    for (int y = x; y >= 0; y--)
    
    // Display results
    cout << characters[y];
}// End program