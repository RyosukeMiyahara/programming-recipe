#include <stdio.h>

int main(void) {
  // one line comment

  printf("one line comment can write after statement\n"); // one line comment

  /* This comment style can be written in multi lines like the following */
  /*
    line 1
    line 2
  */
  /* This comment style can be embedded in statement */
  printf("This printf() statement line includes " /* comment */ "comment\n");

  return 0;
}
