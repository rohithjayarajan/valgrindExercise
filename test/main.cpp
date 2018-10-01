/**
 *  @file    main.cpp
 *  @author  rohithjayarajan
 *  @copyright GNU Public License
 *
 *  @brief ENPM808X Valgrind Exercise (Week5)
 *
 *  @section DESCRIPTION
 *
 *  Program to learn usage of valgrind and
 *  to remove bugs in the code
 *
 */

#include <gtest/gtest.h>

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
