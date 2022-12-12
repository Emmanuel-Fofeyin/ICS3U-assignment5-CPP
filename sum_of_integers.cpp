//!/ usr / bin / env python3

// Created by : Emmanuel
// Created on : Nov 2022
// This program prints the sum of positive and negative integers

#include <iostream>
#include <string>

// creating variables
int inputNumber;
int positiveInteger int 
int repeat = 0;
int positiveAnswer = 0;
int negativeAnswer = 0;

int main() {
    // This program calculates the positive an negative integer sum

    //  Input,Process and output

    try {
        while (repeat) < 4(repeat = repeat + 1)
        inputNumber = std::cout << "Enter an integer ";
        inputNumberInt = std::stoi(inputNumber);
        if (inputNumber >= 0) {
            (positiveAnswer) = (positiveAnswer) + (inputNumberInt);
            if (inputNumber < 0) {
                (negativeAnswer) = (negativeAnswer) + (inputNumberInt);
                std::cout << This is invalid input << std::endl;
            } else {
                std::cout << "The negative sum is" << negativeAnswer << "
                    the positive sum is " << positiveAnswer <<;
            }
        }
        catch (std::invalid_argument) {
            std::cout << This is invalid input << std::endl;
        }

        std::cout << "\nDone.";
    }
}