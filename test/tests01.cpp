#include <gtest/gtest.h>
#include <string>
#include "../include/function.h"

TEST(test_01, basic_test_set) {
    std::string text = "hello";
    ASSERT_TRUE(function(text, 1, 'l', 'x') == "hexxo");
}

TEST(test_02, basic_test_set) {
    std::string text = "lol lol lol";
    ASSERT_TRUE(function(text, 2, 'l', 'x') == "lox lox lox");
}

TEST(test_03, basic_test_set) {
    std::string text = "";
    ASSERT_TRUE(function(text, 1, 'a', 'b') == "");
}

TEST(test_04, basic_test_set) {
    std::string text = "sokolniki";
    ASSERT_TRUE(function(text, 15, 'l', 'x') == "sokolniki");
}

TEST(test_05, basic_test_set) {
    std::string text = "fiin";
    ASSERT_TRUE(function(text, 1, 'i', 'e') == "feen");
}

TEST(test_06, basic_test_set) {
    std::string text = "zapad rabotaet v shtatnom rezhime";
    ASSERT_TRUE(function(text, 0, 'z', 'Z') == "zapad rabotaet v shtatnom rezhime");
}

TEST(test_07, basic_test_set) {
    std::string text = "bolshe 0.7 nelzya";
    ASSERT_TRUE(function(text, 1, '7', '5') == "bolshe 0.5 nelzya");
}

TEST(test_08, basic_test_set) {
    std::string text = "na kpp";
    ASSERT_TRUE(function(text, 3, 'p', 't') == "na kpp");
}

TEST(test_09, basic_test_set) {
    std::string text = "Tynb";
    ASSERT_TRUE(function(text, 1, 'T', 't') == "tynb");
}

TEST(test_10, basic_test_set) {
    std::string text = "steward01";
    ASSERT_TRUE(function(text, 1, '1', '2') == "steward02");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}