/**
 *  @copyright (c) 2021 Sahruday
 *  @file    AcceleratedCpp4-5.hpp
 *  @author  Sahruday 
 *
 *  @brief Header
 *
 */

#pragma once

#include <iostream>

#include <string>

#include <sstream>

#include <algorithm>

#include <iterator>

#include <vector>

#include <bits/stdc++.h>

/**
 * @brief Reader class, stores the input sentence
 * and words in a vector and has two methods
 * one to count number of words - wordcounter
 * other two count each word frequency
 */
class Reader {
 public:
    std::string sentence;
    std::vector < std::string > words;
    Reader();
    void wordcounter(std::vector < std::string > words);
    void frequency(const std::vector <std::string> &words);
};

Reader:: Reader(void) {

}