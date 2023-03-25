// Create a zombie process that
// must be reparented at exit.

#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
// ASS1 - Task 1
int
main(void)
{
  printf("Hello World xv6");
  exit(0,"---");
}
