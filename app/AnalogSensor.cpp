/**
 *  @file    AnalogSensor.cpp
 *  @author  rohithjayarajan
 *  @copyright GNU Public License
 *
 *  @brief ENPM808X Valgrind Exercise (Week5)
 *
 *  @section DESCRIPTION
 *
 *  Function used to learn usage of valgrind
 *  and to remove bugs in the code
 *
 */

#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>

AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples) {
}

AnalogSensor::~AnalogSensor() {
}

int AnalogSensor::Read() {
    std::vector<int> *readings = new std::vector<int>(mSamples, 10);

  double result = std::accumulate(readings->begin(), readings->end(), 0.0)
      / readings->size();
    delete readings;
    return result;
}


