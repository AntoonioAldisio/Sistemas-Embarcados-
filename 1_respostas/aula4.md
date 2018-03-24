Para todas as questões, utilize as funções da biblioteca `stdio.h` de leitura e de escrita em arquivo (`fopen()`, `fclose()`, `fwrite()`, `fread()`, dentre outras). Compile os códigos com o gcc e execute-os via terminal.

1. Crie um código em C para escrever "Ola mundo!" em um arquivo chamado 'ola_mundo.txt'.

########## Inicio ##################


#include<stdio.h> 

int main(){


	FILE *arqv;
	arqv = fopen("ola_mundo.txt","wt");// Criando o arquivo texto

	if(arqv == NULL) // verificando se foi aberto
	{
		printf("Erro na abertura do arquivo");
		return 1;
	}

	fprintf(arqv,"Ola_mundo \n");

	fclose(arqv);
	printf("Uma mensagem foi gravada no arquivo com sucesso \n ");


return 0;
}

########## FIM ##################

2. Crie um código em C que pergunta ao usuário seu nome e sua idade, e escreve este conteúdo em um arquivo com o seu nome e extensão '.txt'. Por exemplo, considerando que o código criado recebeu o nome de 'ola_usuario_1':

```bash
$ ./ola_usuario_1
$ Digite o seu nome: Eu
$ Digite a sua idade: 30
$ cat Eu.txt
$ Nome: Eu
$ Idade: 30 anos
```

########## Inicio ##################

#include<stdio.h> 

int main(){

	char nome[100];
	int idade;

	FILE *arq;
	arq  = fopen("ola_usuario_1","wt");

	if (arq == NULL)
	{
		printf("Erro na abertura do arquivo");
		return 1;
	}
	printf("Informe seu Nome: ");
	gets(nome);
	printf("Informe a sua idade ");
	scanf("%i",&idade);

	fprintf(arq, "O nome do  Usuario: %s \n",nome);
	fprintf(arq," A idade do Usuario: %i \n",idade);

	fclose(arq);

	printf("Os dados foram gravados com sucesso! \n");

return 0;
}

########## FIM ##################

3. Crie um código em C que recebe o nome do usuário e e sua idade como argumentos de entrada (usando as variáveis `argc` e `*argv[]`), e escreve este conteúdo em um arquivo com o seu nome e extensão '.txt'. Por exemplo, considerando que o código criado recebeu o nome de 'ola_usuario_2':

```bash
$ ./ola_usuario_2 Eu 30
$ cat Eu.txt
$ Nome: Eu
$ Idade: 30 anos
```
########## Inicio ##################

#include<stdio.h> 

int main(int arg, char *argv[]){


	FILE *arq;
	arq  = fopen("ola_usuario_2","wt");

	if (arq == NULL)
	{
		printf("Erro na abertura do arquivo");
		return 1;
	}

	fprintf(arq, "O nome do  Usuario: %s \n",argv[1]);
	fprintf(arq," A idade do Usuario: %s \n",argv[2]);

	fclose(arq);

	printf("Os dados foram gravados com sucesso! \n");

return 0;
}

########## FIM ##################

4. Crie uma função que retorna o tamanho de um arquivo, usando o seguinte protótipo: `int tam_arq_texto(char *nome_arquivo);` Salve esta função em um arquivo separado chamado 'bib_arqs.c'. Salve o protótipo em um arquivo chamado 'bib_arqs.h'. Compile 'bib_arqs.c' para gerar o objeto 'bib_arqs.o'.

5. Crie uma função que lê o conteúdo de um arquivo-texto e o guarda em uma string, usando o seguinte protótipo: `void le_arq_texto(char *nome_arquivo, char *conteudo);` Repare que o conteúdo do arquivo é armazenado no vetor `conteudo[]`. Ou seja, ele é passado por referência. Salve esta função no mesmo arquivo da questão 4, chamado 'bib_arqs.c'. Salve o protótipo no arquivo 'bib_arqs.h'. Compile 'bib_arqs.c' novamente para gerar o objeto 'bib_arqs.o'.

6. Crie um código em C que copia a funcionalidade básica do comando `cat`: escrever o conteúdo de um arquivo-texto no terminal. Reaproveite as funções já criadas nas questões anteriores. Por exemplo, considerando que o código criado recebeu o nome de 'cat_falsificado':

```bash
$ echo Ola mundo cruel! Ola universo ingrato! > ola.txt
$ ./cat_falsificado ola.txt
$ Ola mundo cruel! Ola universo ingrato!
```
########## Inicio ##################

#include<stdio.h>

int main(){
	char Linha[100];
	char *result;
	FILE *arq; 
	arq = fopen("ola.txt","rt");

	if (arq == NULL)
	{
		printf("Erro na abertura do arquivo");
		return 1;
	}
	int i=1;
	while(!feof(arq))
	{
		result = fgets(Linha,100,arq);
		if(result)
			printf("Linha %d : %s",i,Linha);
		i++;
	}
	fclose(arq);
	printf("Os dados foram gravados com sucesso! \n");

return 0; 
}

########## FIM ##################

7. Crie um código em C que conta a ocorrência de uma palavra-chave em um arquivo-texto, e escreve o resultado no terminal. Reaproveite as funções já criadas nas questões anteriores. Por exemplo, considerando que o código criado recebeu o nome de 'busca_e_conta':

```bash
$ echo Ola mundo cruel! Ola universo ingrato! > ola.txt
$ ./busca_e_conta Ola ola.txt
$ 'Ola' ocorre 2 vezes no arquivo 'ola.txt'.
```
