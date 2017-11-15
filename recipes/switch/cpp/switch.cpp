#include <iostream>

void switchFunc(int value) {
  switch(value) {
  case 1:
    std::cout << "show 1 and break" << std::endl;
    break;
  case 2:
    std::cout << "show 2, and no break" << std::endl;
  case 3:
    std::cout << "show 3 and break" << std::endl;
    break;
  default:
    std::cout << "value does not match the above any case" << std::endl;
    break;
  }
  return;
}

int main(void) {
  switchFunc(1);
  switchFunc(2);
  switchFunc(3);
  switchFunc(99);
  return 0;
}

