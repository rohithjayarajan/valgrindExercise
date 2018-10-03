/**
 *  @file    AnalogSensor.hpp
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

#pragma once

#include <iostream>

class AnalogSensor {
 public:
    explicit AnalogSensor(unsigned int samples);
    ~AnalogSensor();
    int Read();
 private:
    unsigned int mSamples;
};
