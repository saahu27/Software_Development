/**
 * @copyright (c) 2022 Sahruday
 * @file SoftwareEngineering3_10.cpp
 * @author Sahruday
 * @brief 3_10 solution main
 */

#include <iostream>
#include "Software_engineering_3_10.hpp"

/**
 * @brief data method stores student 
 * data entered by the user
 */

void studentClass::data(int n) {
    int i;
    for (i = 0; i < n; i++) {
      std::cout << "Enter Student ID:";
      std::cin >> studentArray[i].id;
      std::cout << "Enter Grade:";
      std::cin >> studentArray[i].grade;
    }
  }
/**
 * @brief updateGrade method updates the grades of the 
 * students entered by the user
 */
  void studentClass::updateGrade() {
    int iupdate, j;
    double igrade;
    std::cout << "Grade Updation-> Enter Student ID:";
    std::cin >> iupdate;
    std::cout << "Grade Updation-> Enter new grade:";
    std::cin >> igrade;
    for (j = 0; j != studentArray[j].id; j++) {
      if (studentArray[j].id == iupdate) {
        studentArray[j].grade = igrade;
        std::cout << "New grade for the student with ID: " << "\n"
        << studentArray[j].id << " is " << studentArray[j].grade << "\n";
        break;
      }
    }
  }
/**
 * @brief GPA method calculates the overall class grades of the 
 * students entered by the user
 */
  void studentClass::cumulative_GPA(int n) {
    double sum = 0;
    int ij;
    double gpa;
    for (ij = 0; ij < n; ij++) {
      sum += studentArray[ij].grade;
    }
    gpa = sum / (double)n;
    std::cout << "GPA of the Class:" << gpa;
  }


int main() {
    // inputs from user
    int n;
    // object for the class studentclass
    studentClass studentObj;

    std::cout << "Enter number of student to be inserted: ";
    std::cin >> n;
    std::cout << "Inserting Student data \n";
    studentObj.data(n);

    std::cout << "Updating grade of the Student \n";
    studentObj.updateGrade();

    std::cout << "Calculating grade point average of the class \n";
    studentObj.cumulative_GPA(n);

  return 0;
}