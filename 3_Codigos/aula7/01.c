#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>

int main()
{
	int pid;	// PID do processo filho
	int fd[2];	// Descritores do pipe
	int mensagem [12];
  int i;
	// Cria o pipe
	pipe(fd);
	// Cria o processo
	pid = fork();
	// Codigo do pai
	if(pid != 0)
	{
    printf("Pai vai escrever no pipe\n");

    for( i =1;i<=10;i++)
    {
      mensagem[i] = i;
        if (write(fd[1], mensagem, sizeof(mensagem)) < 0)
        {
           printf("Erro na escrita do pipe\n");
        }
        else
        {
           printf("Pai terminou de escrever no pipe\n");
           printf("O pai escreveu %d\n",mensagem[i]);
           sleep(1);
        }
    }
  }
	// Codigo do filho
	else
	{

    printf("Filho vai ler o pipe\n");
    if(read(fd[0], mensagem, sizeof(mensagem)) < 0)
    {
      printf("Erro na leitura do pipe\n");
    }
    else
    {
      for(i=1;i<=10;i++)
      {
           printf("Filho leu: %d\n", mensagem[i]);
           sleep (1);
      }
    }

	}
	return 0;
}
