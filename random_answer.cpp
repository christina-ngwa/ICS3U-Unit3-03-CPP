// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: September 2019
// This function checks if the user guess the number

#include <iostream>
#include <time.h>       /* time */

int main() {
    // This function checks if the user guess the number

    /* initialize random seed: */
    srand(time(NULL));

     int randomanswer = rand() % 100 + 1;
     int guess;

    // input
    std::cout << "Guess what number I'm thinking of! (between 1 & 100)"
    << std::endl;
    std::cout << "Enter your guess: ";
    std::cin >> guess;

    // process
    if (guess == randomanswer) {
         // output
         std::cout << "" << std::endl;
         std::cout << "You are correct!" << std::endl;
    } else {
    std::cout << "" << std::endl;
    std::cout << "Sorry, the answer I was thinking of was " << randomanswer
    << "." << std::endl;
    }
}
