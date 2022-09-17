/**
 *  @copyright (c) 2022 Sahruday
 *  @file    SoftwareEngineering3-10.hpp
 *  @author  Sahruday
 *
 *  @brief Header
 *
 */


#pragma once

#include<iostream>

struct student {
      int id;
      float grade;
};

/**
 * @brief studentClass has a student data type to store id and grades 
 * contains two methods - to change grade and to calculate cumulative gpa.
 */
class studentClass {
 public:
    student studentArray[100];
    studentClass();
    void data(int t);
    void updateGrade();
    void cumulative_GPA(int t);
};

studentClass::studentClass(void) {

}