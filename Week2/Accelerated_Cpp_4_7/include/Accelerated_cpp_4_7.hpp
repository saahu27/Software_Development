/* copyright
*/

#pragma once

#include<iostream>
#include<vector>

float Average(std::vector<double> vec) {
    int size = vec.size();
    double avg;
    for (auto i = 0; i < size; i++) {
        avg += vec[i];
    }
    return avg/size;
}