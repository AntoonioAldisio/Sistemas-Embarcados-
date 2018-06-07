

Para todas as questões, compile-as com o gcc e execute-as via terminal.

    Crie um "Olá mundo!" em C.

    Crie um código em C que pergunta ao usuário o seu nome, e imprime no terminal "Ola " e o nome do usuário. Por exemplo, considerando que o código criado recebeu o nome de 'ola_usuario_1':

$ ./ola_usuario_1
$ Digite o seu nome: Eu
$ Ola Eu

###### Codigo trabalhado  ######

#include <stdio.h>


int main(){
	char nome[30];
	printf("Digite o seu nome ");
	scanf("%s",nome);
	printf("Ola %s \n ", nome );


return 0;
}

###### Fim #######

    Apresente os comportamentos do código anterior nos seguintes casos:

(a) Se o usuário insere mais de um nome.

$ ./ola_usuario_1
$ Digite o seu nome: Eu Mesmo

	Ele so apresenta o Eu  e desconsidera mesmo

(b) Se o usuário insere mais de um nome entre aspas duplas. Por exemplo:

$ ./ola_usuario_1
$ Digite o seu nome: "Eu Mesmo"

	Ele so pega o dado "Eu e desconsidera tudo apos o espaço dado pelo usuario.

(c) Se é usado um pipe. Por exemplo:

$ echo Eu | ./ola_usuario_1

	a saida apresentada é Digite o seu nome Ola EU

(d) Se é usado um pipe com mais de um nome. Por exemplo:

$ echo Eu Mesmo | ./ola_usuario_1

	a saida apresentada é Digite o seu nome Ola EU

(e) Se é usado um pipe com mais de um nome entre aspas duplas. Por exemplo:

$ echo "Eu Mesmo" | ./ola_usuario_1

	a saida apresentada é Digite o seu nome Ola EU

(f) Se é usado o redirecionamento de arquivo. Por exemplo:

$ echo Ola mundo cruel! > ola.txt
$ ./ola_usuario_1 < ola.txt

	a saida apresentada é Digite o seu nome Ola Ola


    Crie um código em C que recebe o nome do usuário como um argumento de entrada (usando as variáveis argc e *argv[]), e imprime no terminal "Ola " e o nome do usuário. Por exemplo, considerando que o código criado recebeu o nome de 'ola_usuario_2':

###### Codigo trabalhado  ######

#include <stdio.h>

int main (int argc, char **argv){
        printf ("Olá %s \n ", argv[1]);

return 0;
}

###### Fim #######



$ ./ola_usuario_2 Eu
$ Ola Eu

    Apresente os comportamentos do código anterior nos seguintes casos:

(a) Se o usuário insere mais de um nome.

$ ./ola_usuario_2 Eu Mesmo
 Ola Eu

(b) Se o usuário insere mais de um nome entre aspas duplas. Por exemplo:

$ ./ola_usuario_2 "Eu Mesmo"
  Ola Eu Mesmo

(c) Se é usado um pipe. Por exemplo:

$ echo Eu | ./ola_usuario_2
  Olá (null)

(d) Se é usado um pipe com mais de um nome. Por exemplo:

$ echo Eu Mesmo | ./ola_usuario_2
  Olá (null)

(e) Se é usado um pipe com mais de um nome entre aspas duplas. Por exemplo:

$ echo Eu Mesmo | ./ola_usuario_2
  Olá (null) 	

(f) Se é usado o redirecionamento de arquivo. Por exemplo:

$ echo Ola mundo cruel! > ola.txt
$ ./ola_usuario_2 < ola.txt
  Olá (null)



    Crie um código em C que faz o mesmo que o código da questão 4, e em seguida imprime no terminal quantos valores de entrada foram fornecidos pelo usuário. Por exemplo, considerando que o código criado recebeu o nome de 'ola_usuario_3':

$ ./ola_usuario_3 Eu
$ Ola Eu
$ Numero de entradas = 2


###### Codigo trabalhado  ######

#include <stdio.h>

int main(int argc, char **argv){
        printf("Argumentos: %s \n", argv[1]);

return 0;
}

###### Fim #######


    Crie um código em C que imprime todos os argumentos de entrada fornecidos pelo usuário. Por exemplo, considerando que o código criado recebeu o nome de 'ola_argumentos':

$ ./ola_argumentos Eu Mesmo e Minha Pessoa
$ Argumentos: Eu Mesmo e Minha Pessoa
###### Codigo trabalhado  ######

#include<stdio.h>

int main (int argc, char **argv){

        int i = 1;
        printf("Argumentos: %s \n");

        while (i!= argc)
        {

                printf("%s", argv [i]);
                i++;;
        }

return 0;
}

###### Fim #######

Crie uma função que retorna a quantidade de caracteres em uma string, usando o seguinte protótipo: int Num_Caracs(char *string); Salve-a em um arquivo separado chamado 'num_caracs.c'. Salve o protótipo em um arquivo chamado 'num_caracs.h'. Compile 'num_caracs.c' para gerar o objeto 'num_caracs.o'.

Re-utilize o objeto criado na questão 8 para criar um código que imprime cada argumento de entrada e a quantidade de caracteres de cada um desses argumentos. Por exemplo, considerando que o código criado recebeu o nome de 'ola_num_caracs_1':

$ ./ola_num_caracs_1 Eu Mesmo
$ Argumento: ./ola_num_caracs_1 / Numero de caracteres: 18
$ Argumento: Eu / Numero de caracteres: 2
$ Argumento: Mesmo / Numero de caracteres: 5

    Crie um Makefile para a questão anterior.

    Re-utilize o objeto criado na questão 8 para criar um código que imprime o total de caracteres nos argumentos de entrada. Por exemplo, considerando que o código criado recebeu o nome de 'ola_num_caracs_2':

$ ./ola_num_caracs_2 Eu Mesmo
$ Total de caracteres de entrada: 25

    Crie um Makefile para a questão anterior.
