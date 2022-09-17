/**
 *  @copyright (c) 2021 Sahruday
 *  @file    AcceleratedCpp4-5.cpp
 *  @author  Sahruday 
 *
 *  @brief Header
 *
 */

#include "Accelerated_cpp_4_5.hpp"


void Reader::wordcounter(std::vector < std::string > inputStream) {
    std::cout << "total words" << " " <<inputStream.size() << std::endl;
}

void Reader::frequency(const std::vector <std::string> &words) {
    std::vector < std::string > tmpWords = words;
    std::vector<std::string> iter = tmpWords;
    do {
    std::string val = iter[0];
    int freq = count(iter.begin(), iter.end(), val);
    std::cout << val << " occurred " << freq << " time(s)" << std::endl;
    iter.erase(std::remove(iter.begin(), iter.end(), val), iter.end());
  } while (iter.size() != 0);

}

int main() {
    std::vector < std::string > inputStream;  ///< vector to store input stream
    std::cout << "Enter the words- " << std::endl;
    std::string inputSentence;
    getline(std::cin, inputSentence);
    std::istringstream wordStream(inputSentence);
    std:: string words;
    while (wordStream >> words) {
        inputStream.push_back(words);
    }

    Reader obj;
    obj.sentence = inputSentence;
    obj.words = inputStream;
    obj.wordcounter(inputStream);
    obj.frequency(obj.words);
    return 0;
}
