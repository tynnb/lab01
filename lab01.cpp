#include <iostream>
#include "include/function.h"

int main() {
    std::string text;
    int n;
    char oldv;
    char newv;

    std::getline(std::cin, text);
    std::cin >> n;
    std::cin >> oldv;
    std::cin >> newv;

    std::cout << "result: " << function(text, n, oldv, newv) << std::endl;

    return 0;
}