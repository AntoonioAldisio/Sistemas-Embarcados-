1. Quantos pipes serão criados após as linhas de código a seguir? Por quê?

(a)
```C
int pid;
int fd[2];
pipe(fd);
pid = fork();
```

Criando dois, por causa do fork.

(b)
```C
int pid;
int fd[2];
pid = fork();
pipe(fd);
```
Criando apenas um.

2. Apresente mais cinco sinais importantes do ambiente Unix, além do `SIGSEGV`, `SIGUSR1`, `SIGUSR2`, `SIGALRM` e `SIGINT`. Quais são suas características e utilidades?

SIGSEGV -> Emitido em caso  de violação  da segmentação : tentativa  de acesso  a um dado fora do dominio de endereçamento  do processo

SIGUSR1 ->  Primeiro sinal disponivel ao usuario:  utilizado  para entre processos.

SIGUSR2 -> Outro sinal disponivel ao usuario: utilizando para  comunicação interprocessual

SIGALRM->  Relogio: Emitido  quando o relogio  de um  processo  pára.

SIGINT -> Interrupção: sinal Emitido aos processos  do terminal  quando  as teclas de Interrupção do teclado  são acionadas

SIGQUIT -> Abandono:  sinal emitido  aos processos  do termianl  quando  as teclas de abandono do teclado  são acionadas

SIGHUP -> Corte : quando o  processo associados a um terminal  quando esse proceso "desconecta"

SIGILL(4) -> Instução ilegal

SIGIOT(6) -> problema de Instução no I/0 ( problema de Hardware)

3. Considere o código a seguir:

```C
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void tratamento_alarme(int sig)
{
	system("date");
	alarm(1);
}

int main()
{
	signal(SIGALRM, tratamento_alarme);
	alarm(1);
	printf("Aperte CTRL+C para acabar:\n");
	while(1);
	return 0;
}
```

Sabendo que a função `alarm()` tem como entrada a quantidade de segundos para terminar a contagem, quão precisos são os alarmes criados neste código? De onde vem a imprecisão? Este é um método confiável para desenvolver aplicações em tempo real?
