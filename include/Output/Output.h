#ifndef OUTPUT_H
#define OUTPUT_H

#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

class Output
{
public:
    Output() = default;
    ~Output() = default;

    static void print(std::string t_output) {
        std::cout << "[std::string printed using cout]\t" << t_output << std::endl;
    }

    static void print(const char* t_output) {
        printf("[const char* printed using printf]\t");
        printf(t_output);
        printf("\n");
    }
};

#endif