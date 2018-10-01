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

#include <iostream>
#include <AnalogSensor.hpp>

int main() {
  AnalogSensor lightSensor(5);
  std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
  bool terminator = true;
  if (terminator) {
    std::cout << "DONE" << std::endl;
    }
  return 0;
}
