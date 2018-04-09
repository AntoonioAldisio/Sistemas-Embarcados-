<<<<<<< HEAD
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(){

int fd;
char c[] = "Ola mundo !!  ";
fd = open("ola_mundo.txt", O_WRONLY|O_CREAT);

for(int i =0;i<=c[i];i++){
	write(fd,&(c[i]),1);
}

close (fd);
return 0;
}
=======
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
>>>>>>> 1aa4f077cbb4fb7740cc3afd49ad20f1d74ecb81
