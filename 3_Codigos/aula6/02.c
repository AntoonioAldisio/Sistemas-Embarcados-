#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

 int main(int argc, char const *argv[]) {
  /* code */
int i ;
for (i = 1; i<argc; i++)
{
  system(argv[i]);
}

  return 0;
}
