// Copyright (c) 2022 Hunter Connolly All rights reserved
// Created by: Hunter Connolly
// Created on: April 20, 2022
// This program asks the user to enter a whole number
// it then calculates the factorial of that number

#include <iostream>
#include <string>


int main() {
    // declare variables
    std::string userInputString;
    int userInput;

    // initioaize the loop counter and sum
    int factorialAnswer = 1;
    int loopCounter = 0;

    // Get the user input as a string
    std::cout << "Enter a whole number: ";
    std::cin >> userInputString;
    std::cout << "\n";

    // calculate factorial
    try {
        userInput = std::stoi(userInputString);

        if (userInput < 0) {
            std::cout << "That is a negative number";
            std::cout << "\n";
        } else {
            do {
                loopCounter = loopCounter + 1;
                std::cout << "Tracking " << loopCounter <<
" times through loop\n";
                factorialAnswer = loopCounter * factorialAnswer;
            } while (loopCounter < userInput);
        }
        std::cout << "\n";
        std::cout << userInput << "! = " << factorialAnswer;
    } catch (std::invalid_argument) {
        std::cout << "That is an invalid number! \n";
}
}
