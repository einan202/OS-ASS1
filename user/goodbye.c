// Create a zombie process that
// must be reparented at exit.

#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
// ASS1 - Task 3
int
main(void)
{
  exit(0, "Goodbye World xv6");
}
