1. Crie um código em C para gerar três processos-filho usando o `fork()`.

############### Inicio #############

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  int pids[3];

for(int i =0; i<4; i++)
{
  pids[i]= fork();
  if(pids[i] != 0)
  {
    break;
  }
}
return 0;
}

################ Fim ####################

2. Crie um código em C que recebe o nome de diversos comandos pelos argumentos de entrada (`argc` e `*argv[]`), e executa cada um sequencialmente usando `system()`. Por exemplo, considerando que o código criado recebeu o nome de 'serial_system', e que ele foi executado na pasta '/Sistemas_Embarcados/Code/06_Processos', que contem diversos arquivos:

```bash
$ ./serial_system pwd echo ls echo cal
$ ~/Sistemas_Embarcados/Code/06_Processos
$
$ Ex1.c    Ex2b.c   Ex4.c   Ex6.c
$ Ex2a.c   Ex3.c    Ex5.c   serial_system
$
$     Março 2017
$ Do Se Te Qu Qu Se Sá
$           1  2  3  4
$  5  6  7  8  9 10 11
$ 12 13 14 15 16 17 18
$ 19 20 21 22 23 24 25
$ 26 27 28 29 30 31
```

################ Codigo  #####################
 #include<stdio.h>
 #include<stdlib.h>

 int main(int argc, char * argv[]){
	 int i;
	 			for(i=1, i<argc;i++){
					system(argv[i])
				}

	 return 0;
 }
############### FIM #########################

3. Crie um código em C que recebe o nome de diversos comandos pelos argumentos de entrada (`argc` e `*argv[]`), e executa cada um usando `fork()` e `exec()`.

################### Inicio###################
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
####################Fim######################



4. Crie um código em C que gera três processos-filho usando o `fork()`, e que cada processo-filho chama a seguinte função uma vez:

```C
int v_global = 0; // Variavel global para este exemplo
void Incrementa_Variavel_Global(pid_t id_atual)
{
	v_global++;
	printf("ID do processo que executou esta funcao = %d\n", id_atual);
	printf("v_global = %d\n", v_global);
}
```

(Repare que a função `Incrementa_Variavel_Global()` recebe como entrada o ID do processo que a chamou.) Responda: a variável global `v_global` foi compartilhada por todos os processos-filho, ou cada processo enxergou um valor diferente para esta variável?

#############Inicio##################$
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int v_global = 0; // Variavel global para este exemplo
void Incrementa_Variavel_Global(pid_t id_atual)
{
  v_global++;
  printf("ID do processo que executou esta funcao = %d\n", id_atual);
  printf("v_global = %d\n", v_global);
}

int main () {
    int i, pid;

    for (i = 0; i < 3; ++i) {
        if(fork()==0)
        Incrementa_Variavel_Global(getpid());
        return 0;
    }
}
##################Fim############################

5. Repita a questão anterior, mas desta vez faça com que o processo-pai também chame a função `Incrementa_Variavel_Global()`. Responda: a variável global `v_global` foi compartilhada por todos os processos-filho e o processo-pai, ou cada processo enxergou um valor diferente para esta variável?

####################Inicio###################
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int v_global = 0; // Variavel global para este exemplo
void Incrementa_Variavel_Global(pid_t id_atual)
{
  v_global++;
  printf("ID do processo que executou esta funcao = %d\n", id_atual);
  printf("v_global = %d\n", v_global);
}

int main () {
    int i, pid;

    for (i = 0; i < 3; ++i)
    {
        if(fork()==0){
        Incrementa_Variavel_Global(getpid());

    }
        else
        {
        Incrementa_Variavel_Global(getpid());
        }
  return 0;
}

###################FIM################
