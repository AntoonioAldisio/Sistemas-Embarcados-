#include<stdio.h>
#include<sys/

int main(int argv, char *argv[]){
	
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
		if(result== argv[])
			printf("Linha %d : %s",i,Linha);
		i++;
	}
	fclose(arq);
	printf("Os dados foram gravados com sucesso! \n");

return 0; 
}
