// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on:October 2019
// This program loops and multiplies all the whole

#include <iostream>

main() {
    // variables
    int answer = 1;
    int counter = 1;
    int number;

    // input
    std::cout << "Enter a number to loop it and multiply its results: ";
    std::cin >> number;

    // process & looping
    do {
        answer = answer * counter;
        counter = counter + 1;
    } while (counter <= number);

    std::cout << "The factorial of your number is " << answer << std::endl;
}
