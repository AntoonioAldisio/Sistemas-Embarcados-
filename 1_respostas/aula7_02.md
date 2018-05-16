1. Crie um programa em C que cria um processo-filho e um pipe de comunicação. Faça com que o processo-pai envie os valores 1, 2, 3, 4, 5, 6, 7, 8, 9 e 10 para o processo-filho, com intervalos de 1 segundo entre cada envio. Depois de o processo-pai enviar o número 10, ele aguarda 1 segundo e termina a execução. O processo-filho escreve na tela cada valor recebido, e quando ele receber o valor 10, ele termina a execução.

############## Inicio ##################

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

############Fim######################

2. Crie um programa em C que cria um processo-filho e um pipe de comunicação. Utilize o pipe para executar a seguinte conversa entre processos:

```
FILHO: Pai, qual é a verdadeira essência da sabedoria?
PAI: Não façais nada violento, praticai somente aquilo que é justo e equilibrado.
FILHO: Mas até uma criança de três anos sabe disso!
PAI: Sim, mas é uma coisa difícil de ser praticada até mesmo por um velho como eu...
```
######################Inicio#########################

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main (){

	int fd[2]; //	descrição da variavel compartilhada
	//	fd[0] -> leitura    fd[1] -> escrita
	pipe(fd); //cria pipe com fd como variável compartilhada

	if(fork()==0){ //	processo filho
		char mensagem_1[100] = "FILHO: Pai, qual é a verdadeira essência da sabedoria?";
		char mensagem_2[100] = "FILHO: Mas até uma criança de três anos sabe disso!";

		char mensagem_pai[100];

		write(fd[1],&mensagem_1, sizeof(mensagem_1));
		sleep(1); // filho hiberna para esperar pai terminar de ler o pipe

		read(fd[0], &mensagem_pai , sizeof(mensagem_pai) );
		printf("%s\n", mensagem_pai);
		write(fd[1],&mensagem_2, sizeof(mensagem_2));
		sleep(2);

		read(fd[0], &mensagem_pai , sizeof(mensagem_pai) );
		printf("%s\n", mensagem_pai);


	}

	else{

		char mensagem_1[100] = "PAI: Não façais nada violento, praticai somente aquilo que é justo e equilibrado.";
		char mensagem_2[100] = "PAI: Sim, mas é uma coisa difícil de ser praticada até mesmo por um velho como eu...";

		char mensagem_filho[100];

		read(fd[0], &mensagem_filho , sizeof(mensagem_filho) );
		printf("%s\n", mensagem_filho);
		write(fd[1],&mensagem_1, sizeof(mensagem_1));
		sleep(2);

		read(fd[0], &mensagem_filho , sizeof(mensagem_filho) );
		printf("%s\n", mensagem_filho);
		write(fd[1],&mensagem_2, sizeof(mensagem_2));
		sleep(1);



	}

	return 0;
}

##############Fim#########################

Neste exercício, quem recebe a mensagem via pipe é quem as escreve no terminal.

3. Crie um programa em C que cria dois processos-filhos e um pipe de comunicação. Utilize o pipe para executar a seguinte conversa entre processos:

```
FILHO1: Quando o vento passa, é a bandeira que se move.
FILHO2: Não, é o vento que se move.
PAI: Os dois se enganam. É a mente dos senhores que se move.
```

Neste exercício, quem recebe a mensagem via pipe é quem as escreve no terminal.

4. Crie um programa em C que cria um processo-filho e um pipe de comunicação. O processo-filho deverá pedir o nome do usuário, envia-lo para o pai via pipe, e o pai deverá escrever o nome do usuário no terminal.

5. Utilize o sinal de alarme para chamar a cada segundo o comando `ps` ordenando todos os processos de acordo com o uso da CPU. Ou seja, seu código atualizará a lista de processos a cada segundo. Além disso, o código deverá tratar o sinal do CTRL-C, escrevendo "Processo terminado!" na tela antes de terminar a execução do processo.
