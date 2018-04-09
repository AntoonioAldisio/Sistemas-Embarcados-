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
