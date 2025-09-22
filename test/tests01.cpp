#include <gtest/gtest.h>
#include <string>
#include "../include/function.h"

TEST(test_01, basic_test_set) {
    std::string text = "hello";
    std::string result = function(text, 1, 'l', 'x');
    ASSERT_TRUE(result == "hexxo");
}

TEST(test_02, basic_test_set) {
    std::string text = "hello world";
    std::string result = function(text, 2, 'l', 'x');
    ASSERT_TRUE(result == "helxo world");
}

TEST(test_03, basic_test_set) {
    std::string text = "hello";
    std::string result = function(text, 10, 'l', 'x');
    ASSERT_TRUE(result == "hello");
}

TEST(test_04, basic_test_set) {
    std::string text = "test";
    std::string result = function(text, 1, 't', 'T');
    ASSERT_TRUE(result == "TesT");
}

TEST(test_05, basic_test_set) {
    std::string text = "aaa";
    std::string result = function(text, 3, 'a', 'b');
    ASSERT_TRUE(result == "aab");
}

TEST(test_06, basic_test_set) {
    std::string text = "abc";
    std::string result = function(text, 0, 'a', 'x');
    ASSERT_TRUE(result == "abc");
}

TEST(test_07, basic_test_set) {
    std::string text = "hi";
    std::string result = function(text, 5, 'h', 'x');
    ASSERT_TRUE(result == "hi");
}

TEST(test_08, basic_test_set) {
    std::string text = "hello";
    std::string result = function(text, 1, 'z', 'x');
    ASSERT_TRUE(result == "hello");
}

TEST(test_09, basic_test_set) {
    std::string text = "lol lol lol";
    std::string result = function(text, 2, 'l', 'x');
    ASSERT_TRUE(result == "lox lox lox");
}

TEST(test_10, basic_test_set) {
    std::string text = "";
    std::string result = function(text, 1, 'a', 'b');
    ASSERT_TRUE(result == "");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}