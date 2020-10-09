//
// Created by acq07 on 04/10/2020.
//

#include "gtest/gtest.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    std::cout << "Hello, Universidad Nacional!" << std::endl;

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
