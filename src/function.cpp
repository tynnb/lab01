#include "../include/function.h"

std::string function(std::string& text, int n, char oldv, char newv) {
    if (n < 1 || n > text.length()) {
        return text;
    }

    int k = 0;

    for (int i = 0; i < text.length(); i++) {
        if (text[i] == oldv) {
            k++;
            if (k == n) {
                text[i] = newv;
                k = 0;
            }
        }
    }
    return text;
}