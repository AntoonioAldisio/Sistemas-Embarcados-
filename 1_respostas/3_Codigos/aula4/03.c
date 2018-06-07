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

