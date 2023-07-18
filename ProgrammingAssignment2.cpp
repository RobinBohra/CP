// Copyright A.T. Chamillard. All Rights Reserved.

#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <cmath>

// IMPORTANT: Only add code in the section
// indicated below. The code I've provided
// makes your solution work with the 
// automated grader on Coursera

// x and y coordinates for points
float Point1X;
float Point1Y;
float Point2X;
float Point2Y;

void GetInputValuesFromString(std::string Input);

/**
 * Programming Assignment 2
 * @return exit status
*/
int main()
{
    // loop while there's more input
    std::string Input;
    std::getline(std::cin, Input);
    while (Input[0] != 'q')
    {
        // extract point coordinates from string
        GetInputValuesFromString(Input);

        // Add your code between this comment
        // and the comment below. You can of
        // course add more space between the
        // comments as needed



        // Don't add or modify any code below
        // this comment
        std::getline(std::cin, Input);
    }
}

/**
 * Extracts point coordinates from the given input string
 * @param Input input string
*/
void GetInputValuesFromString(std::string Input)
{
    // extract point 1 x
    int SpaceIndex = Input.find(' ');
    Point1X = std::stof(Input.substr(0, SpaceIndex));

    // move along string and extract point 1 y
    Input = Input.substr(SpaceIndex + 1);
    SpaceIndex = Input.find(' ');
    Point1Y = std::stof(Input.substr(0, SpaceIndex));

    // move along string and extract point 2 x
    Input = Input.substr(SpaceIndex + 1);
    SpaceIndex = Input.find(' ');
    Point2X = std::stof(Input.substr(0, SpaceIndex));

    // point 2 y is the rest of the string
    Input = Input.substr(SpaceIndex + 1);
    Point2Y = std::stof(Input);
}