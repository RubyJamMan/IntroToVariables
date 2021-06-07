// IntroToVariables.cpp : This file contains the 'main' function. Program execution begins and ends there

// This is a simple project that demos how to create an int variable
// I've provided comments to explain certain aspects of the program

// Includes the code needed to use "std::cout" and "std::cin"
#include <iostream>

// The main function - all C++ projects must have one
int main()
{
    // 1) Definition of an integer variable - not initialised
    // 2) Assigning a value to the myAge variable
    // 3) Prints "myAge" / "10" to the console

    int myAge;    
    myAge = 10;
    std::cout << "My age is: " << myAge << std::endl;

    // 1) Define another int variable
    // 2) Prints "Enter a custom age: " to the console
    // 3) Read a value from the console and store the input within "customAge"
    // 4) Prints "customAge" to the console

    int customAge;
    std::cout << "Enter a custom age: ";
    std::cin >> customAge;
    std::cout << "You entered: " << customAge << std::endl;

    // 1) An example of the camelCase naming convention
    // 2) An example of the under_score naming convention
    // Both variables initialised to 0

    int camelCaseExample = 0;
    int under_score_example = 0;
}
