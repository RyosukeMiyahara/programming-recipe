#include <iostream>

int main(void) {
  // one line comment

  std::cout << "one line comment can write after statement" << std::endl; // one line comment

  /* This comment style can be written in multi lines like the following */
  /*
    line 1
    line 2
  */
  /* This comment style can be embedded in statement */
  std::cout << "This statement line includes" /* comment */ "comment" << std::endl;

  return 0;
}
