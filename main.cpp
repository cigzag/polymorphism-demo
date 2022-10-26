// Created by Wyatt Wheeler on 27/10/22

#include <iostream>
#include <string>

// Function overloading
// Utilizing the same function name but different parameters allows us to utilize
// the same function with different outcomes.

// int add(param1, param2)
// Add two numbers together and return the result.
int add(int param1, int param2) {
    return param1 + param2; 
}

// int add()
// Add two pre-defined strings together and output the result.
int add() {
    // Create two strings & concatenate them together & send output.
    std::string sFirst = "Hello ";
    std::string sLast = "World!";
    std::string sFinal = sFirst + sLast;
    std::cout << sFinal;
}

int main() {
    // Utilize our first function using the parameters to get the desired outcome.
    int i = add(1, 2);
    std::cout << i << "\n"; // Returns three

    // Utilize our second function using no parameters to use our defined behavior above.
    add(); // Returns hello world!
    return 0;
}
