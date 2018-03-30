#include <unistd.h>
#include <stdio.h>

int fd; 
char c;
fd = open("/tmp/ola_mundo.txt", O_WRONLY);

if (fp ==-1)
{
	printf("Erro na abertura do arqivo. \n ");
	exit(-1);
}

ssize_t read("ola mundo", O_WRONLY);
close (fp);
