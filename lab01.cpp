#include <iostream>
#include <string>
#include "include/function.h"
//#include "src/function.cpp"

int main() {
    std::string text;
    int n;
    char old_value;
    char new_value;

    std::getline(std::cin, text);
    std::cin >> n;
    std::cin >> old_value;
    std::cin >> new_value;

    std::cout << "result: " << function(text, n, old_value, new_value) << std::endl;

    return 0;
}