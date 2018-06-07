#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(){

int fs;
char Nome[100];
char idade[20];

fs = open("ola_usuario_1.txt", O_WRONLY | O_CREAT);

if(fs==-1)
	{
		printf("Erro na abertura do arquivo.\n");
		exit(-1);
	}

printf("Informe o seu nome: \n" );
gets(Nome);
printf("Informe a sua idade: \n");
gets(idade);

write(fs,Nome,strlen(Nome)*sizeof(char));
write(fs,idade,strlen(idade)*sizeof(char));

close (fs);
return 0;
}
