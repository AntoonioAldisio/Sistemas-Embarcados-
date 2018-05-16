#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(int arg, char *argv[]){

int fs;

fs = open("ola_usuario_2.txt", O_WRONLY | O_CREAT);

if(fs==-1)
	{
		printf("Erro na abertura do arquivo.\n");
		exit(-1);
	}


write(fs,argv[1],strlen(argv[1])*sizeof(char));

write(fs,argv[2],strlen(argv[2])*sizeof(char));

close (fs);
return 0;
}
