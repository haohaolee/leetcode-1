/*
* Copyright (c) 2017 Su Shi
* Setup, run and tear unit tests written in Google Test.
*/

#include <gtest/gtest.h>

int main(int argc, char ** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
