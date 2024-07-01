#include <gtest/gtest.h>
#include "greeting.h"

TEST(GreetingTest, GreetingForName) {
    std::string name = "Alice";
    std::string expected = "Hello, Alice!";
    std::string result = greeting(name);
    EXPECT_EQ(expected, result);
}

TEST(GreetingTest, GreetingForEmptyName) {
    std::string expected = "Hello, World!";
    std::string result = greeting();
    EXPECT_EQ(expected, result);
}

TEST(GreetingTest, GreetingForLongName) {
    std::string name = "John Doe";
    std::string expected = "Hello, John Doe!";
    std::string result = greeting(name);
    EXPECT_EQ(expected, result);
}