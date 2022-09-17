/**
 *  @copyright (c) 2021 Sahruday
 *  @file    AcceleratedC++3-5.hpp
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
 * @brief contains three vectors
 * data is structure comprising students data
 */
struct data {
      std::vector < std::string > name;
      std::vector < double > finalGrade;
    };
class student {
 public:
    data student_data;
    void display();
    student();
}; 

student::student(void) {
  
}