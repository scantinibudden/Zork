#include <gtest/gtest.h>
#include <testmain.h>

int runTests(int argc, char** &argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}