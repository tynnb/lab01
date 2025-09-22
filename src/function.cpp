#include "../include/function.h"
#include <iostream>
#include <string>


std::string function(std::string& text, int n, char old_value, char new_value) {
    if (n < 1 || n > text.length()) {
        return text;
    }

    int k = 0;

    for (int i = 0; i < text.length(); i++) {
        if (text[i] == old_value) {
            k++;
            if (k == n) {
                text[i] = new_value;
                k = 0;
            }
        }
    }
    return text;
}