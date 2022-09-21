/**
 *  @copyright (c) 2021 Sahruday
 *  @file    SoftwareEngineering9_4.hpp
 *  @author  Sahruday 
 *
 *  @brief Header
 *
 */

#pragma once

#include <iostream>

#include <string>

#include <vector>

#include <numeric>

/**
 * @brief 
 * printer is a class to extract a new method from printposition
 */
class printer {
 public:
    void input();
    void printPosition(int text_length, int array_to_search1_length,
char* text, char* array_to_search1, int position1);
    printer();
};

printer::printer(void) { }