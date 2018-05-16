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
