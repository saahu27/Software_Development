/**
 *  @copyright (c) 2021 Sahruday
 *  @file    AcceleratedCpp4-5.cpp
 *  @author  Sahruday 
 *
 *  @brief Header
 *
 */
#include <iostream>
#include <vector>
#include "Accelerated_cpp_4_7.hpp"

int main() {
    std::vector < double > vec;
    int len;
    double input;
    std::cout << "Enter length of the vector:" << std::endl;
    std::cin >> len;
    std::cout << "Enter the numbers" << std::endl;
    for (int i = 0; i < len; i++) {
        std::cin >> input;
        vec.push_back(input);
    }
    double avg = 0.0;
    avg = Average(vec);
    std::cout<< avg;
    return 0;
}