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
#include <numeric>
#include <string>
#include <vector>

/**
 * @brief
 * printer is a class to extract a new method from printposition,
 * The motivation behind solving this problem
 * is to implement method extraction for code refractory using
 * input method
 */
class printer {
 public:
  void input();
  void printPosition(int text_length, int array_to_search1_length, char* text,
                     char* array_to_search1, int position1);
  printer();
};

printer::printer(void) {}