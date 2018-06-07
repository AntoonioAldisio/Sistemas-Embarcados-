1. Como se utiliza o comando `ps` para:

(a) Mostrar todos os processos rodando na máquina?

  ps -e

(b) Mostrar os processos de um usuário?

ps -f -u  -usuario

(c) Ordenar todos os processos de acordo com o uso da CPU?

  ps -aux

(d) Mostrar a quanto tempo cada processo está rodando?

  ps -e -o pid,comm,etime

2. De onde vem o nome `fork()`?

  Dividir

3. Quais são as vantagens e desvantagens em utilizar:

(a) `system()`?

    é uma função que executa  o comando espec�fico chamado, assim podendo trazer uma vantagem de agilidade no seu programa, porém tem que ser usado com cuidado pois pode consturir um codigo que mexa em seu sistema.

(b) `fork()` e `exec()`?

    fork() ->  criação de um processo filho
    exec() ->  evocação de um novo programa

4. É possível utilizar o `exec()` sem executar o `fork()` antes?

5. Quais são as características básicas das seguintes funções:

(a) `execp()`?

    evocação de um novo programa aceita que o nome ou procura o programa  esteja  no current path

(b) `execv()`?

    evocação que aceita a lista  de argumentos do novo programa seja nulo

(c) `exece()`?

    evocação que aceita  um argumento adicional

(d) `execvp()`?

    evocação de um novo programa aceita que o nome ou procura o programa  esteja  no current path e evocação que aceita a lista  de argumentos do novo programa seja nulo


(e) `execve()`?

    evocação que aceita a lista  de argumentos do novo programa seja nulo

(f) `execle()`?

    evocação que aceita a lista  de argumentos do novo programa seja nulo 
