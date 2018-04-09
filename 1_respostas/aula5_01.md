Considerando a biblioteca-padrão da linguagem C, responda:
(a) Quais são as funções (e seus protótipos) para abrir e fechar arquivos?

    fopen() e fclose()

(b) Quais são as funções (e seus protótipos) para escrever em arquivos?

    fprintf()    

(c) Quais são as funções (e seus protótipos) para ler arquivos?

    fread()

(d) Quais são as funções (e seus protótipos) para reposicionar um ponteiro para arquivo?

    char *nome; // apontando o ponteiro  
    &nome; // endereço do ponteiro

(e) Quais bibliotecas devem ser incluídas no código para poder utilizar as funções acima?

O que é a norma POSIX?

Considerando a norma POSIX, responda:

(a) Quais são as funções (e seus protótipos) para abrir e fechar arquivos?

    open e close

(b) Quais são as funções (e seus protótipos) para escrever em arquivos?

    write

(c) Quais são as funções (e seus protótipos) para ler arquivos?

    read

(d) Quais são as funções (e seus protótipos) para reposicionar um ponteiro para arquivo?

    lseek

(e) Quais bibliotecas devem ser incluídas no código para poder utilizar as funções acima?

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <termios.h>
