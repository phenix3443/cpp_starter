#include <iostream>

inline std::string greeting(std::string name = "World") {
    return "Hello, " + name + "!";
}