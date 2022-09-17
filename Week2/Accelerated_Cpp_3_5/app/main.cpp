/* copyright */
#include <iostream>
#include <lib.hpp>

int main() {
    std::vector <double> vec{5, 5, 5, 5, 5};
    double avg = 0.0;
    avg = Average(vec);
    std::cout<< avg;
    return 0;
}
