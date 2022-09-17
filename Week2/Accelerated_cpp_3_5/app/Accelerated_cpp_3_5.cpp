/**
 *  @copyright (c) 2021 Sahruday
 *  @file    AcceleratedC++3-5.hpp
 *  @author  Sahruday 
 *
 *  @brief Header
 *
 */
#include "Accelerated_cpp_3_5.hpp"

using namespace std;

/**
 * @brief display method displays the students data  
 * with name and final/overall grade
 */
void student::display() {
    std::cout << "Displaying Student data:\n";
    for (unsigned int i = 0; i < student_data.name.size(); i++) {
      std::cout << "Student Name: " << student_data.name[i] << ", " << "Overall Grade:" << student_data.finalGrade[i] << std::endl;
    }
  }

int main() {
    student obj;
    std::string name;
    int n;
    double grade;
    std::cout << "Enter number of students " << std::endl;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        double sum = 0.00;
        std::cout << "enter name of student" << std::endl;
        std::cin >> name;
        obj.student_data.name.push_back(name);
        std::cout << "number of grades fixed to 3" << std::endl;
        for (int i = 1; i < 4; i++) {
            std::cout << "Enter the grade" << i << "for" << name << std::endl;
            std::cin >> grade;
            sum += grade;
        }
        obj.student_data.finalGrade.push_back(sum/3);
    }
    obj.display();
    return 0;
}
