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
