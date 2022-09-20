/**
 *  @copyright (c) 2021 sahruday
 *  @file    softwareEngineering_9_4.cpp
 *  @author  Sahruday
 *
 *  @brief Extraction of printPosition and code reusablility
 *
 */
#include "/home/sahu27/Software_Development/Week3/Software_Engineering_9_4/include/Software_Engineering_9_4.hpp"

/**
 * @brief
 * printPostion method enable code resuablity and extraction mechanism
 * this extracted method is used to find and print position
 */
void printer::printPosition(int text_length, int array_to_search1_length,
                            char* text, char* array_to_search1, int position1) {
  int i, j;
  for (i = 0; i < text_length - array_to_search1_length + 1; i++) {
    bool found = true;
    for (j = 0; j < array_to_search1_length; j++) {
      if (text[i + j] != array_to_search1[j]) {
        found = false;
      }
    }
    if (found) {
      position1 = i;
      break;
    }
  }
  std::cout << "Position at ::: " << position1 << std::endl;
}

/**
 * @brief
 * input() method makes sure that all the inputs for printing the positon
 * are fed and passed by value to printPosition() method
 */
void printer::input() {
  char text[1024] = "";
  char array_to_search1[4] = "";
  int array_to_search1_length;
  std::cout << "Enter the Text without spaces:" << std::endl;
  std::cin >> text;
  int text_length = 1024;
  std::cout << "Enter the element to search: ";
  std::cin >> array_to_search1;
  std::cout << "Enter the length of search element: ";
  std::cin >> array_to_search1_length;
  int position1 = -1;
  printPosition(text_length, array_to_search1_length, text, array_to_search1,
                position1);
}

int main() {
  printer printObj;
  printObj.input();
}
