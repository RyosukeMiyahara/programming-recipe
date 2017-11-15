#include <stdio.h>

void switchFunc(int value) {
  switch(value) {
  case 1:
    puts("show 1 and break");
    break;
  case 2:
    puts("show 2, and no break");
  case 3:
    puts("show 3 and break");
    break;
  default:
    puts("value does not match the above any case");
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

