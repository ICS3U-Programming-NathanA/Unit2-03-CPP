// Copyright (c) 2022 Nathan Araujo All rights reserved.
//
// Created by: Ms Raffin
// Date: Sept 27 2022
// This program asks the user for the radius and then
// calculates the circumference using tau.
#include <iostream>

int main() {
    // declare constants
    const float TAU = 6.28;

    // declare variables
    float radius, circumference;

    // get the input from the user
    std::cout << "Enter the radius (cm): ";
    std::cin >> radius;

    // calculate the circumference using tau
    circumference = TAU * radius;

    // display the results
    std::cout << "\n";
    std::cout << "Circumference = " << circumference << " cm" << std::endl;
}
