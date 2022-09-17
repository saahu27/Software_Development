/**
 *  @copyright (c) 2021 Sahruday Patti
 *  @file    AcceleratedCpp6_9.hpp
 *  @author  Sahruday 
 *
 *  @brief Header
 *
 */

#pragma once

#include <iostream>

#include <vector>

#include <algorithm>

#include <string>

#include <numeric>

/**
 * @brief concatenator class has only methods, to concatenate
 * data elements stored in a vector of string type.
 */
class concatenator {
  public:
  std::string concat_v(const std::vector < std::string > & stringVector);
  concatenator();
  
};

concatenator::concatenator(void) {

}