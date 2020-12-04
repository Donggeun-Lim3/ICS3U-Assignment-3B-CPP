// Copyright (C) 2002 Donggeun Lim All rights reserved.
//
// Created by Donggeun Lim
// Created on December 2020
// This program find greatest among numbers.

#include <iostream>


int main() {
    int firstNumber;
    int secondNumber;

    // input
    std::cout << "Enter the first number : ";
    std::cin >> firstNumber;
    std::cout << "" << std::endl;
    std::cout << "Enter the second number : ";
    std::cin >> secondNumber;
    std::cout << "" << std::endl;

    // process

    if (firstNumber > secondNumber) {
        // output
        std::cout << "The greatest number is " << firstNumber << std::endl;
    } else if (firstNumber < secondNumber) {
        std::cout << "The greatest number is " << secondNumber << std::endl;
    } else {
        std::cout << "The numbers are same!";
    }
}
