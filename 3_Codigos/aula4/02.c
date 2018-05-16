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
