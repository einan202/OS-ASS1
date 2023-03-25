// Create a zombie process that
// must be reparented at exit.

#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
// ASS1 - Task 2

// TODO - NOT WORKING - Something about the alloc and freeing !!!!!!!!!!!!!!
int
main(void)
{
  uchar *str;
  printf("Proc %d - memsize: %d Bytes\n", getpid(), memsize());
  
  str = (uchar *) malloc(20000);
  printf("Post 20K allocation\n");
  printf("Proc %d - memsize: %d Bytes\n", getpid(), memsize());
  
  free(str);
  printf("Post 20K freeing memory\n");
  printf("Proc %d - memsize: %d Bytes\n", getpid(), memsize());
  
  exit(0,"---");
}
