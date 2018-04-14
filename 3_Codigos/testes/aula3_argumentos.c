#include<stdio.h>

int main (int argc, char **argv){

	int i = 1;
	printf("Argumentos: %s \n");

	while (i!= argc)
	{

		printf("%s", argv [i]);
		i++;;
	}

return 0;
}
