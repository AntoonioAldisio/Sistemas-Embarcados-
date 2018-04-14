#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>

 int main(int argc, char const *argv[]) {
  /* code */
int i,pid ;

for (i = 1; i< argc; i++)
{
  pid = fork();
  if (pid == 0)
  { //se sou o processo filho: saio do ciclo!
    execvp(argv[i], argv[i+1]);
  return 0;
  }
  else
  {
    sleep(2);
    printf("Eu sou o pai \n");
  }

}

  return 0;
}
