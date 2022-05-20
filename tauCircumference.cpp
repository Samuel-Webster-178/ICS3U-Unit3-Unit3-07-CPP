// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on February 2022
// Calculates perimeter and area of a rectangle
//     with dimensions inputted from user

#include <iostream>
#include <string>

int main() {
    // this function is a age function
    std::string isRich;
    std::string isGoodLooking;

    // input
    std::cout << "Are you rich (y/n): ";
    std::cin >> isRich;
    std::cout << "Are you good looking (y/n): ";
    std::cin >> isGoodLooking;

    // process & output
    if (isRich == "y" || isGoodLooking == "y") {
        std::cout << "You can date her" << std::endl;
    } else if (isRich == "n" && isGoodLooking == "n") {
        std::cout << "You can't date her" << std::endl;
    } else {
        std::cout << "Invalid Input" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
