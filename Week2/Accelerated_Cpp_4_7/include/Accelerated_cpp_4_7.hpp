/**
 *  @copyright (c) 2021 Sahruday
 *  @file    AcceleratedCpp4-7.hpp
 *  @author  Sahruday 
 *
 *  @brief Header
 *
 */

#pragma once

#include<iostream>
#include<vector>

float Average(std::vector<double> vec) {
    int size = vec.size();
    double avg = 0.0;
    for (auto i = 0; i < size; i++) {
        avg += vec[i];
    }
    return avg/size;
}