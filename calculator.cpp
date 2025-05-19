// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by: Reid MacLean
// Created on: May 2025
// This program calculates the result of two numbers
// using the calculate
// (char sign, float firstNumber, float secondNumber) function

#include <iostream>

float calculate(char sign, float firstNumber, float secondNumber) {
    // This function performs the selected operation
    if (sign == '+') {
        return firstNumber + secondNumber;
    } else if (sign == '-') {
        return firstNumber - secondNumber;
    } else if (sign == '*') {
        return firstNumber * secondNumber;
    } else if (sign == '/') {
        if (secondNumber == 0) {
            std::cout << "Error: Division by zero." << std::endl;
            return 0;
        }
        return firstNumber / secondNumber;
    } else if (sign == '%') {
        if (secondNumber == 0) {
            std::cout << "Error: Modulo by zero." << std::endl;
            return 0;
        }
        // Simple integer modulus using static_cast
        int intFirst = static_cast<int>(firstNumber);
        int intSecond = static_cast<int>(secondNumber);
        return intFirst % intSecond;
    } else {
        std::cout << "Invalid operator" << std::endl;
        return 0;
    }
}

int main() {
    char sign;
    float firstNumber, secondNumber;

    std::cout << "Enter the operator (+, -, *, /, %): ";
    std::cin >> sign;

    std::cout << "Enter the first number: ";
    if (!(std::cin >> firstNumber)) {
        std::cout << "Invalid input. Please enter a valid number." << std::endl;
        return 1;
    }

    std::cout << "Enter the second number: ";
    if (!(std::cin >> secondNumber)) {
        std::cout << "Invalid input. Please enter a valid number." << std::endl;
        return 1;
    }

    float result = calculate(sign, firstNumber, secondNumber);

    std::cout << "The result of " << firstNumber << " "
              << sign << " " << secondNumber << " is: " << result << std::endl;
}
