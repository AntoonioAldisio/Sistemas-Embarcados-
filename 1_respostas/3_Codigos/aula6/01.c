#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main () {
    int i, pid;
    for (i = 0; i < 4; ++i) {
        pid = fork();
        if (pid != 0) { //se sou o processo filho: saio do ciclo!
            break;
        }
    }
    printf("I am : (i=%d),(pid=%d) mypid=%d\n",i, pid, getpid());
    return 0;
}

/*
if(pids[0] == 0 )
{
  printf("Filho 1\n");
}
if(pids[1] == 0)
{
  printf("Filho 2\n");
}
if(pids[2] == 0 )
{
  printf("Filho 3\n");
}

  if((pid = fork ())< 0)
  {
    perror("fork");
    exit(1);
  }

  if(pid == 0)
  {
    printf("pid do Pai: %d\n",getpid() );
  }
  else
  {
    printf(" Pid do Pai %d\n", getpid() );
  }

  printf("Esta região será executada por  ambos processos \n");
  scanf("%d\n",&i );
  exit(0) ;
  */
