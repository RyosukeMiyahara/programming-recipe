#include <iostream>
#include <cstdlib>  // abs() for integer
#include <cmath>    // abs() for float, and fabs()

int main() {
  // Get absolute value of integer
  std::cout << "Absolute value of  5 is " << std::abs(5) << std::endl;
  std::cout << "Absolute value of -5 is " << std::abs(-5) << std::endl;

  // Get absolute value of float
  std::cout << "Absolute value of  5.5 is " << std::abs(5.5) << std::endl;
  std::cout << "Absolute value of -5.5 is " << std::abs(-5.5) << std::endl;

  // Get absolute value of float 2
  std::cout << "Absolute value of  5.5 is " << std::fabs(5.5) << std::endl;
  std::cout << "Absolute value of -5.5 is " << std::fabs(-5.5) << std::endl;
  return 0;
}
